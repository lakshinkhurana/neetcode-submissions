class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxVal=0;
        unordered_set<int>checkSet(nums.begin(),nums.end());
        for(int num:nums){
            if(checkSet.find(num-1)==checkSet.end()){
                int length=0;
                while(checkSet.find(num+length)!=checkSet.end())length++;
                maxVal=max(maxVal,length);
            }
            
        }
        return maxVal;
    }
};
