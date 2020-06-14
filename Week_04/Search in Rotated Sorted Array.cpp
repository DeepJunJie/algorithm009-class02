class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=0;
        while(left<=right){
            mid=(left+right)/2;
            if(nums[0]>target){
                if(nums[0]<=nums[mid]) left=mid+1;
                  else{
                    if(nums[mid]<target) left=mid+1;
                    else if(nums[mid]==target) return mid;
                    else right=mid-1;
                } 
                 
            } else {
              if(nums[0]>nums[mid]) right=mid-1;
                else{
                    if(nums[mid]<target) left=mid+1;
                    else if(nums[mid]==target) return mid;
                    else right=mid-1;
                } 
            }
            
        }
        return -1;
    }
};