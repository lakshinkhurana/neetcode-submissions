class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return rowCheck(board) && colCheck(board) && boxCheck(board);
    }

    bool rowCheck(vector<vector<char>>& board) {
        for(int row = 0; row < 9; row++){
            unordered_set<char> rowSet;
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;
                if(rowSet.count(board[row][col])) return false;
                rowSet.insert(board[row][col]);
            }
        }
        return true;
    }

    bool colCheck(vector<vector<char>>& board) {
        for(int col = 0; col < 9; col++){
            unordered_set<char> colSet;
            for(int row = 0; row < 9; row++){
                if(board[row][col] == '.') continue;
                if(colSet.count(board[row][col])) return false;
                colSet.insert(board[row][col]);
            }
        }
        return true;
    }

    bool boxCheck(vector<vector<char>>& board) {
        for(int box = 0; box < 9; box++){
            unordered_set<char> boxSet;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    int row = (box / 3) * 3 + i;
                    int col = (box % 3) * 3 + j;
                    if(board[row][col] == '.') continue;
                    if(boxSet.count(board[row][col])) return false;
                    boxSet.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};