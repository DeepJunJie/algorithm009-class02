class Solution {
public:
    vector<vector<string>> ret; 
    vector<string> tmp; 
    vector<bool> col;
    vector<bool> left_right; 
    vector<bool> right_left; 
    int nn = 0;
    
    void helper(int row_n){
        if(row_n == nn){
            ret.push_back(tmp);
            return;
        }
        
        for(int col_n=0;col_n<nn;col_n++){
            int left = (col_n - row_n) + nn - 1;
            int right = col_n + row_n;
            if(col[col_n] && left_right[left] && right_left[right]){ 
                tmp[row_n][col_n] = 'Q';
                col[col_n] = false;
                left_right[left] =false;
                right_left[right] = false;
                
                helper(row_n + 1);
                
                tmp[row_n][col_n] = '.'; 
                col[col_n] = true;
                left_right[left] =true;
                right_left[right] = true;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        col.resize(n,true);
        left_right.resize(2*n-1,true);
        right_left.resize(2*n-1,true);
        tmp.resize(n,string(n,'.'));
        nn = n;
        helper(0);
        
        return ret;
    }
}; 