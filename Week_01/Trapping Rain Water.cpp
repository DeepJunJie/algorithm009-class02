class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3)
           return 0;
        int sum=0;
        int totalsum=0;
        int i=0;
        int j=height.size()-1;
        int loop=0;
        while(i<=j){
            loop++;
             while(i<=j && height[i]<loop){
                 sum+=height[i++];
             }
             while(i<=j && height[j]<loop){
                 sum+=height[j--];
             }
             totalsum+=j-i+1;
        }
        return totalsum-sum;
    }
};