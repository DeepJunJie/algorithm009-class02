class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) 
           return 0;
        vector<vector<int>> matrix1;
        vector<int> line;
        for(int i=0;i<matrix.size();i++){
            line.clear();
            for(int j=0;j<matrix[0].size();j++){
                line.push_back(matrix[i][j]-'0');
            }
            matrix1.push_back(line);
        }
        int res=0;
        for(int i=matrix1.size()-1;i>-1;i--)
            for(int j=matrix1[0].size()-1;j>-1;j-- ){
               if(i<matrix1.size()-1&&j<matrix1[0].size()-1){
                  if(matrix1[i][j]==1){
                    int a=matrix1[i+1][j]<matrix1[i][j+1]?matrix1[i+1][j]:matrix1[i][j+1];
                    int b=matrix1[i+1][j+1]<a?matrix1[i+1][j+1]:a;
                    matrix1[i][j]=b+1;
                    res=matrix1[i][j]>res?matrix1[i][j]:res;   
                  }
               }else  res=matrix1[i][j]>res?matrix1[i][j]:res;   
            }
    return res*res;
    }
};