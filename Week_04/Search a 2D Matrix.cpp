class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())
          return false;
        int m= matrix.size(),n=matrix[0].size();
        int left=0,right=m*n-1,mid,midx,midy;
        while(left<=right){
            mid=(left+right)/2;
            midx=mid/n;
            midy=mid%n;
            if(matrix[midx][midy]>target) right=mid-1;
            else if(matrix[midx][midy]<target) left=mid+1;
            else return true; 
        }
    return false;
    }
};