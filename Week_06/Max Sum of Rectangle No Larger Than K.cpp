class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int res=INT_MIN;
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> sum_matrix(matrix);
        for(int i=0;i<m;i++)
            for(int j=1;j<n;j++){
            sum_matrix[i][j]+=sum_matrix[i][j-1];
            }
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++) {
                set<int> M;
                int psum=0;
                M.insert(0);
                for(int row=0;row<m;row++){
                 psum+=sum_matrix[row][j]-sum_matrix[row][i]+matrix[row][i];
                    auto ptr=M.lower_bound(psum-k);
                    if(ptr!=M.end()){
                       res=max(res,psum-*ptr);
                    }
                    M.insert(psum);
                }
            }

        return res;
    }
};