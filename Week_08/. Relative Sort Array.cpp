class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        set<int> a2set;
        vector<int> sta1;
        vector<int> sta2;
        unordered_map<int,int> Map;
        for(auto i:arr2) a2set.insert(i);
        for(int i=0;i<arr1.size();i++){
              if(a2set.find(arr1[i])!=a2set.end())
                 //sta1.push_back(arr1[i]);
                 Map[arr1[i]]++;
                else
                 sta2.push_back(arr1[i]);
        }
        vector<int> result;
        for(auto a:arr2){
            while(Map[a]>0){
                result.push_back(a);
                Map[a]--;
            }
        }
        sort(sta2.begin(),sta2.end());
        for(int i=0;i<sta2.size();i++) result.push_back(sta2[i]);
        return result;
    }
};