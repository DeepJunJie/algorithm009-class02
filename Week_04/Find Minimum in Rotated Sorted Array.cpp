class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return min(nums[0],nums[1]);
        for(int i=0;i<nums.size()-1;i++) {
            if(nums[i+1]<nums[i])
            return nums[i+1];
        }
        return nums[0];
    }
};