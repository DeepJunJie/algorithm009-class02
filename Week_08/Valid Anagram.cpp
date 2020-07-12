class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char,int> m;
         for(auto a:s) m[a]++;
         for(auto a:t) m[a]--;
         for(auto a:s) if(m[a]!=0) return false;
         for(auto a:t) if(m[a]!=0) return false;
         return true;
    }
};