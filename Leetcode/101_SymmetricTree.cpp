//101. Symmetric Tree
//easy

/**
 * Definition for a binary tree node.
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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        
        return checkSymmetry(root->left, root->right);
    }
    
    bool checkSymmetry(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        
        if(!p || !q)return false;
        
        if(p->val!= q->val)
            return false;
        
        return checkSymmetry(p->left, q->right) && checkSymmetry(p->right , q->left) ;
    }
};