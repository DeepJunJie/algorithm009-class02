class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
         if(bills.size()<1)
         return true;
         int i=0,j=0,k=0,t=0;
         bool judge;
         while(t<bills.size()){
             if(bills[t]==10) {
                if(i>0)
                   i--;
                else 
                   return false;
                j++;
            }             
             if(bills[t]==5) i++;
             if(bills[t]==20){
                if(i>0&&j>0){
                   j--;
                   i--; 
                }
                else if(i>3){
                   i-=3;
                } else
                   return false;
                k++;
             }  
             t++;
         }
         return true;
    }
};