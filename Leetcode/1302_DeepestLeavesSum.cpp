//1302. Deepest Leaves Sum
//Medium

class Solution {
public:
    int deepest=0, sum=0;
    int deepestLeavesSum(TreeNode* root, int depth=0) {
        if(!root)
            return 0;
        
    
        if(!root->left && !root->right){
            if(depth==deepest)
                sum+=root->val;
            else if(depth>deepest){
                sum=root->val;
                deepest=depth;
            }
        }
            deepestLeavesSum(root->left, depth+1);
            deepestLeavesSum(root->right, depth+1);
           return sum;
    }
};