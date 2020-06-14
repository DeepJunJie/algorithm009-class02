class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size()==0||s.size()==0)
           return 0;
        int num=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<s.size()&&j<g.size()){
             if(s[i]>=g[j]){
                num++;
                i++;
                j++;

             }else{
                 i++;
             }
        }
        return num;
    }
};