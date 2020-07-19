class Solution {
public:
    int firstUniqChar(string s) {
        int p[26]={0};
        for(int i=0;i<s.length();i++) 
            p[s[i]-'a']++;
        for(int ii=0;ii<s.length();ii++) 
           if(p[s[ii]-'a']==1) return ii;
        return -1;
    }
};