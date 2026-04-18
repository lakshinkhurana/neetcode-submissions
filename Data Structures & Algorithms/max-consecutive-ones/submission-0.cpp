class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxVal=0,cur=0;
        for(int num:nums){
            if(num==1){
                cur++;
                maxVal=max(cur,maxVal);
            }else cur=0;
        }
        return maxVal;
    }
};