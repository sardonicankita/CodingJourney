/**
173_BinarySearchTreeIterator
//MEDIUM

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
class BSTIterator {
public:
    stack<TreeNode*>a;
    
    BSTIterator(TreeNode *root) {
       Move(root);
    }
    
    void Move(TreeNode* root){
         TreeNode* temp=root;
        while(temp){
            a.push(temp);
            temp=temp->left;
        }
    }
    
    int next() {
        TreeNode* ans=a.top();
        a.pop();
        
        if(ans->right)
            Move(ans->right);
        
        return ans->val;       
    }
    
    bool hasNext() {
        if(a.empty())
            return false;
        
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */