class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int> dp;
        dp.push_back(nums[0]);
        if(n==1) return 1;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>dp[dp.size()-1]) dp.push_back(nums[i]);
            else
            {
                auto it=lower_bound(dp.begin(),dp.end(),nums[i]);
                *it=nums[i];
            }
           
        }
        return dp.size();
    }
};