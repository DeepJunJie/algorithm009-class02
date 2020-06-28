class Solution {
public:
    int numDecodings(string s) {
        int pre1,pre2,res=0;
        if(s.length()==0) return 0;
        if(s[0]=='0') return 0;
        pre1=1;
        if(s.length()==1) return pre1;
        if(s[1]!='0'){
          if(26>=(s[0]-'0')*10+(s[1]-'0'))  pre2=2;
          else pre2=1;
        } else {
          if(s[0]-'0'>=3) 
                 return 0;
          pre2=1;  
        } 
        res=pre2;
        //return res;
        for(int i=2;i<s.length();i++){
            if(s[i]=='0'&& s[i-1]=='0') return 0;
            if(s[i]=='0'&& s[i-1]!='0'){
               if(s[i-1]-'0'<3) res=pre1;
               else return 0;
            }
            if(s[i]!='0'&&s[i-1]=='0') res=pre1;
            if(s[i]!='0'&&s[i-1]!='0'){
                if(26>=(s[i-1]-'0')*10+(s[i]-'0')) res=pre1+pre2;
                else res=pre2;
            }
           pre1=pre2;
           pre2=res;
        }
        return res;
    }
};