
bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int check[3][9][9] = {0};
    int number;
    int chunk;
    int i, j;
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            if(board[i][j] == '.')
                continue;
            else
            {
                number = (int)(board[i][j] - '0');
                chunk = i / 3 * 3 + j / 3;
                if(check[0][i][number] == 1 || check[1][j][number] == 1 || check[2][chunk][number] == 1)
                    return false;

                check[0][i][number] = 1;
                check[1][j][number] = 1;
                check[2][chunk][number] = 1;
            }
        }
    }
    
    return true;
}


 