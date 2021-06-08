//200_NumberofIslands
//MEDIUM

class Solution {
public:
    void num( vector<vector<char>>& g, int i, int j){
        // bas case
        if(i<0 || i>=g.size() || j<0 || j>=g[0].size()  || g[i][j]=='0' || g[i][j]=='2')
            return ;
        
        g[i][j]='2'; //visited
        
        num( g, i+1, j);
        num( g, i, j-1);
        num( g, i-1, j);
        num( g, i, j+1);
        return;
    }
    
    int numIslands(vector<vector<char>>& g) {
        int ans=0; 
        for(int i=0; i<g.size(); i++){
            for(int j=0; j<g[0].size(); j++){
                if(g[i][j]=='1'){
                    num( g, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};