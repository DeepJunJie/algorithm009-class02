class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        while(i<s.length()){
           if(s.length()-i-1<k){
              revers(i,s.length()-1,s);
           }else if(s.length()-i-1>=k && s.length()-i-1<2*k){
              revers(i,i+k-1,s);
           } else{
              revers(i,i+k-1,s);
           }
           i+=2*k;
        }
        return s;
    }
    void revers(int l,int r,string & s){
        char tmp;
        while(l<r){
           tmp=s[l], s[l]=s[r], s[r]=tmp;
           l++, r--;
        }
    }
};