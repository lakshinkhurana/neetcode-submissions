class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> l(2);
        for(int i = 0;i<nums.size();i++){
            for(int j = 1+i;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                   l[0]=i;
                   l[1]=j;
                   return l; 
                }
            }
        }
    }
};
