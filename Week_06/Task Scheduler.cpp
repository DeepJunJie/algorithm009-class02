class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int res=0;
        vector<int> t(26,0);
        for(auto a:tasks) t[a-'A']++;
        int max_valse=0;
        int count=0;
        for(auto i:t) max_valse=max(max_valse,int(i));
        for(auto i:t){
            if(max_valse==i)
               count++;
        }
        res=max((max_valse-1)*(n+1)+count,int(tasks.size()));
        return res;
    }
};