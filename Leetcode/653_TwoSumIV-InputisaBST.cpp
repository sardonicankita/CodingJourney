//653_TwoSumIV-InputisaBST
//EASY
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
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        Preorder(root, ans);
        int i=0, j=ans.size()-1;
       while(j>i){
           if(ans[i]+ans[j]==k)
               return true;
           
           if(ans[i]+ans[j]<k)
               i++;
           else j--;
       }
        return false;
    }
    
    void Preorder(TreeNode* root, vector<int>& ans){
        if(!root)
            return;
        
        Preorder(root->left, ans);
        ans.push_back(root->val);
        Preorder(root->right, ans);
    }
};