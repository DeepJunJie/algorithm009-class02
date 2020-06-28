class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty())
           return 0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++){
                if(j==0)
                  grid[i][j]+= i==0? 0:grid[i-1][j];
                else
                  grid[i][j]+= i==0? grid[i][j-1]:min(grid[i][j-1],grid[i-1][j]) ;
            }
    return grid[grid.size()-1][grid[0].size()-1];
   // return res[res.size()-1][res[0].size()-1];
    }
};