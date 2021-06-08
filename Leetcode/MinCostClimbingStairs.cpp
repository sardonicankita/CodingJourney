//MinCostClimbingStairs
//EASY

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int ans[n+1];
        ans[0]=0;
        ans[1]=0;
        for(int i=2; i<=cost.size(); i++){
            int s1=ans[i-1]+cost[i-1];
            int s2=ans[i-2]+cost[i-2];
            ans[i]= min(s1, s2);
        }
        return ans[n];
        
    }
};