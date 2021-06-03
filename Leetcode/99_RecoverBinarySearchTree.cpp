/**
 * Definition for a binary tree node.
//99. Recover Binary Search Tree
//Medium


 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void recursive(TreeNode* root, TreeNode*& prev, TreeNode*& first, TreeNode*& end){
        if(root==NULL)return;
        
        recursive(root->left, prev, first, end);
        
        if(prev){
            if(root->val<prev->val){
                if(!first)
                    first=prev;
            end=root;               
            }
        }
        prev=root;
        recursive(root->right, prev, first, end);
    }
    
    void recoverTree(TreeNode* root) {
       TreeNode *prev=nullptr, *first=nullptr, *end=nullptr;
        recursive(root, prev, first, end);
        swap(first->val, end->val);
        
    }
};