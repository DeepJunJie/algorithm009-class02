class Solution {
public:
    int row[9][9] = {0};
    int col[9][9] = {0};
    int l[9][9] = {0};
    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    row[i][board[i][j]-'1'] = 1;
                    col[j][board[i][j]-'1'] = 1;
                    l[i/3*3+j/3][board[i][j]-'1'] = 1;
                }
            }
        }
        backtrack(board,0,0);
    }

    bool backtrack(vector<vector<char>>& board,int r,int c){
        if(r>8) return true;
        if(board[r][c]=='.'){
            for(char ch='1';ch<='9';++ch){
                if(row[r][ch-'1']==1||col[c][ch-'1']==1||l[r/3*3+c/3][ch-'1']==1) continue;
                board[r][c] = ch;
                row[r][ch-'1'] = 1;
                col[c][ch-'1'] = 1;
                l[r/3*3+c/3][ch-'1'] = 1;
                if(backtrack(board,r+(c+1)/9,(c+1)%9)) return true;
                board[r][c] = '.';
                row[r][ch-'1'] = 0;
                col[c][ch-'1'] = 0;
                l[r/3*3+c/3][ch-'1'] = 0;
            }
        }
        else return backtrack(board,r+(c+1)/9,(c+1)%9);
        return false;
    }
}; 