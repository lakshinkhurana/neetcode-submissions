class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            unordered_set<char> rowSet;
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    if (rowSet.find(board[i][j]) != rowSet.end()) {
                        return false;
                    } else {
                        rowSet.insert(board[i][j]);
                    }
                }
            }
        }

        for (int i = 0; i < 9; ++i) {
            unordered_set<char> colSet;
            for (int j = 0; j < 9; ++j) {
                if (board[j][i] != '.') {
                    if (colSet.find(board[j][i]) != colSet.end()) {
                        return false;
                    } else {
                        colSet.insert(board[j][i]);
                    }
                }
            }
        }

        for (int box_row = 0; box_row < 3; ++box_row) {
            for (int box_col = 0; box_col < 3; ++box_col) {
                unordered_set<char> boxSet; 
                for (int r = box_row * 3; r < box_row * 3 + 3; ++r) {
                    for (int c = box_col * 3; c < box_col * 3 + 3; ++c) {
                
                        if (board[r][c] != '.') {
                            if (boxSet.find(board[r][c]) != boxSet.end()) {
                                return false;
                            } else {
                                boxSet.insert(board[r][c]);
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};