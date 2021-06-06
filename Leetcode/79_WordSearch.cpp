//79. Word Search
//MEDIUM

class Solution {
public:
    bool ans(vector<vector<char>>& b, string& w, int i, int j){
        if(w.length()==0)
            return true;
        
        if(i<0|| j<0 || i>=b.size() || j>=b[0].size()|| b[i][j]!=w[0])
            return false;
        
        char c=b[i][j];
        b[i][j]='*';
        string a=w.substr(1);
        bool r=ans(b,a,i+1, j) || ans(b,a,i-1, j) || ans(b,a,i, j+1) || ans(b,a,i, j-1);
        b[i][j]=c;
        return r;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++)
            for(int j=0; j<board[0].size(); j++)
                if(ans (board, word, i, j))
                    return true;        
        return false;
    }
};