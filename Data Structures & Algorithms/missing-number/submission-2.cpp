class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int testsum=0,listsum=0;
        for(int i=0;i<nums.size();i++){
            testsum+=(i+1);
            listsum+=nums[i];
        }
        return testsum-listsum;
    }
};
