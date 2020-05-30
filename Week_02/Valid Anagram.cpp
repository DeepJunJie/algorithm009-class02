class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
            return false;
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
           hash[s[i]-'a']++;
           hash[t[i]-'a']--;
        }
        for (int i=0;i<end(hash)-begin(hash);i++){
           if(hash[i]!=0)
              return false;
        }
        return true;
    }
};