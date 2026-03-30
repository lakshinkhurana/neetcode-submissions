class Solution {
public:
    int rows,cols;
    bool exist(vector<vector<char>>& board, string word) {
        rows=board.size();
        cols=board[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(find(board,word,i,j,0))return true;
            }
        }
        return false;
    }
    bool find(vector<vector<char>>& board,string word,int i,int j, int k){
        if(k==word.size())return true;
        if(i<0 || j < 0 || i>=rows || j>=cols || board[i][j]!=word[k] || board[i][j]=='#')return false;
        board[i][j]='#';
        bool ans=find(board,word,i+1,j,k+1) || find(board,word,i-1,j,k+1) || find(board,word,i,j+1,k+1) || find(board,word,i,j-1,k+1);
        board[i][j]=word[k];
        return ans;
    }
};
