//Ðý×ªÊý×Ö
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<1 || k<0) 
           return;
        k = k % nums.size();
        int a;
        for(int i=0;i<nums.size()/2;i++) {
            a= nums[i];
            nums[i]=nums[nums.size()-i-1];
            nums[nums.size()-i-1]=a;
        }
        for(int i=0;i<k/2;i++) {
            a= nums[i];
            nums[i]=nums[k-i-1];
            nums[k-i-1]=a;
        }
        for(int i=k;i<(nums.size()+k)/2;i++) {
            a= nums[i];
            nums[i]=nums[nums.size()-i+k-1];
            nums[nums.size()-i+k-1]=a;
        }
    }
};