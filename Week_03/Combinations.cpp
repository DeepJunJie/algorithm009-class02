class Solution {
public:
    void dfs(int n,int k,int level,vector<int> &answer,vector<vector<int>>& result){
       if(answer.size()==k){
           result.push_back(answer);
           return;
       }
       for(int i=level+1;i<n+1;i++){
           answer.push_back(i);
            dfs(n,k,i,answer,result);
           answer.pop_back();
       }
         
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> answer;
        if(n<k||k<1)
          return {};
        dfs(n,k,0,answer,result);
        return result;
    }
};