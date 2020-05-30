class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1)
        return 1;
        vector<int> nums;
        nums.push_back(1);
        int a=0,b=0,c=0;
        int i=1;
        while(i<n+1) {
           nums.push_back(min(min(nums[a]*2,nums[b]*3),nums[c]*5));
           if(nums[i]==nums[a]*2) a++;
           if(nums[i]==nums[b]*3) b++;
           if(nums[i]==nums[c]*5) c++;
           i++;
        }
    return nums[n-1];
    }
};