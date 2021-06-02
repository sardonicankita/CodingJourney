// 695. Max Area of Island


class Solution {
public:
    void CheckIsland(int i, int j, int m, int n,vector<vector<int>>& grid, int& s){
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0)
            return;
        
         grid[i][j] = 0;
         s++;
         CheckIsland(i-1, j, m, n, grid, s);
                    CheckIsland(i, j-1, m, n, grid, s);
                     CheckIsland(i+1, j, m, n, grid, s);
                    CheckIsland(i, j+1, m, n, grid, s);
         return ;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int m= grid.size(), n=grid[0].size();
        int ans=0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int s=0;
                if(grid[i][j]==1){
                   CheckIsland(i, j, m, n, grid, s);
                ans=max(ans,s);
            }
        }  
    }
        return ans;
    }
};