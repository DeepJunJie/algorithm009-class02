class Solution {
public:
    bool help(string s,int left,int right){
       while(left<right){
         if(s[left]!=s[right]) return false;
         left++;
         right--;
       }
       return true;
    }
    bool validPalindrome(string s) {
         int l=0, r=s.length()-1;
         if(help(s,l,r)) 
            return true;
         while(l<r){
            if(s[l]!=s[r]){
               if(help(s,l,r-1)||help(s,l+1,r)) 
                  return true;
               else 
                   return false;
             }
             l++;
             r--;
         }
         return false;
       
    }
};