class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,n=nums.size(),curSum=0;
        int minValid=INT_MAX;
        for(int r=0;r<n;r++){
            curSum+=nums[r];
            while(curSum>=target){
                minValid=min(minValid,r-l+1);
                curSum-=nums[l];
                l++;
            }
        }
        return minValid==INT_MAX?0:minValid;
    }
};