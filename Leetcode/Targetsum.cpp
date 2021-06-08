//Targetsum

class Solution {
public:
    bool subSum(vector<int>&nums, int sum){
        int n=nums.size(), m=sum+1;
        vector<bool> dp(m, false);
        dp[0]=true;
        
        for (auto a : nums) {
            for (int i = sum; i >= a; i--) {
                dp[i] = dp[i] || dp[i-a]; // for each number, either we use it or we don't
            } 
        }
        return dp[sum];
        
    }
    
    
    bool canPartition(vector<int>& nums) {
        int sum=0; 
        for(int i=0; i<nums.size(); i++)
            sum+= nums[i];
        
        if(sum%2!=0)
            return false;
        
        else
            return subSum(nums, sum/2);
    }
};