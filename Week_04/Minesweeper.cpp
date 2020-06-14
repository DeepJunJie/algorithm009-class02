class Solution {
public:
    int dir[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    void get(int now_r,int now_c,int &row,int &col,vector<vector<char>>& board){
        if(now_r>=0 && now_r<row && now_c<col && now_c>=0 && board[now_r][now_c]=='E'){
            int sum=0;
            for(int i=0;i<8;i++){
                if(now_r+dir[i][0]>=0 && now_r+dir[i][0]<row && now_c+dir[i][1]<col && now_c+dir[i][1]>=0 && board[now_r+dir[i][0]][now_c+dir[i][1]]=='M') sum++;
            }
            if(sum==0){
                board[now_r][now_c]='B';
                for(int i=0;i<8;i++) get(now_r+dir[i][0],now_c+dir[i][1],row,col,board);
            }else{
                board[now_r][now_c]=sum+'0';
            }
        }
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        if(board.size()==0 || board[0].size()==0) return board;
        int row=board.size(),col=board[0].size();
        if(board[click[0]][click[1]]=='M'){
            board[click[0]][click[1]]='X';
            return board;
        } 
        get(click[0],click[1],row,col,board);
        return board;
    }
};
 