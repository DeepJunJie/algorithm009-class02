¼Ó1 £º
class Solution {
public
    vectorint plusOne(vectorint& digits) {
        for(int i=digits.size()-1;i=0;i--) {
            if(digits[i]==9){
              digits[i]=0;
            }
            else {
              digits[i]++;
              return digits;
            }
        }
        vectorint result;
        result.push_back(1);
        for(int i=0;idigits.size();i++)
          result.push_back(digits[i]);
        return result;
    }
};