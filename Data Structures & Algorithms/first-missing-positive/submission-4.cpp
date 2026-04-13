class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int largest=*max_element(nums.begin(),nums.end());
        if(largest<0)return 1;
        unordered_map<int , bool> hMap;
        for(int num:nums){
            hMap[num]=true;
        }
        for(int i=1;i<largest;i++){
            if(hMap.find(i)==hMap.end())return i;
        }

        return largest+1;
    }
};