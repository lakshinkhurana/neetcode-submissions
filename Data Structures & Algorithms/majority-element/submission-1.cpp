class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int cur=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==cur && count>=0){
                count++;
            }else{
                count--;
                if(count<0){
                    count=1;
                    cur=nums[i];
                }
            }
              
        }
        return cur;
    }
};