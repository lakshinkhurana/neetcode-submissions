class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int largest=*max_element(nums.begin(),nums.end());
        if(largest<0)return 1;
        unordered_set<int> hSet;
        for(int num:nums){
            hSet.insert(num);
        }
        for(int i=1;i<largest;i++){
            if(hSet.find(i)==hSet.end())return i;
        }

        return largest+1;
    }
};