//130_SurroundedRegions
//Medium

class Solution {
public:
    void fun(vector<vector<char>>& g, int i, int j){
        if(g[i][j]=='O'){
            g[i][j]='1';
            
            if(i>1)
                fun(g, i-1, j);
            if(i+1<g.size())
                fun(g, i+1, j);
            if(j>1)
                fun(g, i, j-1);
            if(j+1<g[i].size())
                fun(g, i, j+1);
        }
    }
    
    void solve(vector<vector<char>>& board) {
        if(board.size()==0)
            return;
        
        int m= board.size(), n=board[0].size();
        
        for(int i=0; i<m; i++){
            fun(board, i ,0);
            fun(board, i, n-1);
        }
        
        for(int j=1; j<n-1; j++){
            fun(board, 0, j);
            fun(board, m-1, j);
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                
               else if(board[i][j]=='1')
                    board[i][j]='O';
            }
        }     
    }
};