class Solution {
public:
    int rows,cols;
    bool exist(vector<vector<char>>& board, string word) {
        rows=board.size();
        cols=board[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dfs(board,word,i,j,0))return true;
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int found){
        if(found==word.size())return true;
        if(i<0||j<0||i>=rows||j>=cols||board[i][j]!=word[found]||board[i][j]=='#')return false;
        board[i][j]='#';
        bool res=dfs(board,word,i+1,j,found+1)|| dfs(board,word,i-1,j,found+1) || dfs(board,word,i,j+1,found+1) || dfs(board,word,i,j-1,found+1);
        board[i][j]=word[found];
        return res;
    }
};
