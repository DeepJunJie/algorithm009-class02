class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        vector<int>visit(M.size(),0);
        queue<int>friends;
        int ans=0,j;
        for(auto i=0;i<visit.size();++i)
        {
            if(visit[i]==1)continue;
            friends.push(i);
            while(!friends.empty())
            {
                j=friends.front();
                friends.pop();
                if(visit[j]==1)continue;
                for(auto k=0;k<M[j].size();++k)
                {
                    if(M[j][k]==1)friends.push(k);
                }
                visit[j]=1;
            }
            ans++;
        }
        return ans;
    }
};
 