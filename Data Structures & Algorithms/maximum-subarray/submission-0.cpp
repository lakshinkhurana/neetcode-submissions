class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0,maxSub=nums[0];
        for(int num:nums){
            if(cur<0)cur=0;
            cur+=num;
            maxSub=max(maxSub,cur);
        }return maxSub;
    }
};
