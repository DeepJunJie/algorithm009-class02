class Solution {
public:
    vector<vector<string>> results;
    vector<string> res;
    vector<bool> col;
    vector<bool> right;
    vector<bool> left;
    int N;
    int  totalNQueens(int n) {
        N=n;
        string ss="";
        //for(int k=0;k<N;k++) ss+='.';
        //for(int k=0;k<N;k++) res.push_back(ss);
        res.resize(n,string(n,'.'));
        col.resize(n,true);
        right.resize(2*n+1,true);
        left.resize(2*n+1,true);
        hleper(0);
        return results.size();
    }
    void hleper(int j){
         if(j==N) {
            results.push_back(res);
            return;
         }
         int n=N;
         for(int i=0;i<N;i++){
            if(col[i]&&right[i+j]&&left[i-j+n-1]){
               res[j][i]='Q';
               col[i]=false;
               right[j+i]=false;
               left[i-j+n-1]=false;
               hleper(j+1);
               res[j][i]='.';
               col[i]=true;
               right[j+i]=true;
               left[i-j+n-1]=true;
            }
         }
    }
}; 