class Solution {
public:
    int countSubstrings(string s) {
         int res=0;
         for(int i=0;i<s.length();i++){
             int j=0;
             while(s[i-j]==s[i+j]){
              res++;
              j++;
              if(i-j<0 || i+j>=s.length()) break;
             }
         }
         for(int i=0;i<s.length();i++){
             int j=0;
             while(i-j>=0 && i+j+1<s.length() && s[i-j]==s[i+j+1]){
              res++;
              j++;
             }
         }
         return res;
    }
};