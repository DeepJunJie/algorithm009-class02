class Solution {
    
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int> result;
      unordered_map<int, int> m;
      for(int i=0;i<nums.size();i++)
         m[nums[i]]++;
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> P;
        for(auto iter=m.begin();iter!=m.end();iter++){
            if(P.size()!=k){
              P.push(make_pair(iter->second, iter->first));
            } else {
                if(iter->second>P.top().first){
                   P.pop();
                   P.push(make_pair(iter->second, iter->first));
                }
            }
        }
        while(!P.empty()){
           result.push_back(P.top().second);
           P.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};