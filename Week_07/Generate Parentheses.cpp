class Solution {
public:
    vector<string> results;
    void dfs(int n, int left,int right, string res){
        if(left==n&&right==n){
             results.push_back(res);
             return;
        }
        if(left<n){
           dfs(n,left+1,right,res+'(');
        }
        if(left>right)
           dfs(n,left,right+1,res+')');
    }
    vector<string> generateParenthesis(int n) {
        int left=0,right=0; 
        string res="";
        dfs(n,left,right,res);
        return results;
    }
};