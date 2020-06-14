class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i, int j){ 
        if(i>=0&&i<grid.size()&&j>=0 && j<grid[0].size()){
            if(grid[i][j]=='1'){
               grid[i][j]='0';
               dfs(grid,i+1,j);
               dfs(grid,i,j-1);
               dfs(grid,i-1,j);
               dfs(grid,i,j+1);
            }
       }
       return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int number=0;
        for(int i=0;i<grid.size();i++)
           for(int j=0;j<grid[0].size();j++) {
               if(grid[i][j]=='1'){
                  number++;
                  dfs(grid , i,  j);
               }
           }
        return number;
    }
};