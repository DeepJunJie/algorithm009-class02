class Solution {
public:
   void dfs(vector<int> nums,vector<int>& index,vector<int>& oneresult,vector<vector<int>>& results){
        if(oneresult.size()==nums.size()){
           results.push_back(oneresult);
           return;
        }
        for(int i=0;i<nums.size();i++){
            if(index[i]==0)
            {
            oneresult.push_back(nums[i]);
            index[i]++;
            dfs(nums,index,oneresult,results);
            oneresult.pop_back();
            index[i]--;
              }
        }
   }
  
    vector<vector<int>> permute(vector<int>& nums) {      
         if(nums.size()<1)
            return {};
         vector<int> oneresult;
         vector<int> index(nums.size(),0);
         vector<vector<int>> results;
         dfs(nums,index,oneresult,results);
         return results;
    }
};