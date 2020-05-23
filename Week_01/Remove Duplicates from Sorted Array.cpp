//找出重复的数字
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
           return nums.size();
        int start=1;
        int end=1;     
        int current=nums[0];
        while(end<nums.size() ) {
            if(current!=nums[end]) {      
               current=nums[end];
               nums[start]=nums[end];
               start++;
            }
            end++;
        }
        return start;
    }
};