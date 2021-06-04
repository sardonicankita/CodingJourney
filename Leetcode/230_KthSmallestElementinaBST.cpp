//230_KthSmallestElementinaBST
//Medium


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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        Preorder(root, ans);
        int a=ans[k-1];
        return a;
    }
    
    void Preorder(TreeNode* root, vector<int>& ans){
        if(!root)
            return;
        
        Preorder( root->left, ans);
        ans.push_back(root->val);
        Preorder(root->right, ans);
    }
};