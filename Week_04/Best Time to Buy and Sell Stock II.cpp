class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
           return 0;
        int r=0;
        for(int i=0;i<prices.size()-1;i++)
            r+=max(0,prices[1+i]-prices[i]);
        return r;
    }
};