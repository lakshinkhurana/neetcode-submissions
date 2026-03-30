class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>entry;
        backtrack(nums,entry,0);
        return res;
    }
    void backtrack(vector<int>& nums,vector<int>& entry,int i){
        if(i==nums.size()){
            res.push_back(entry);
            return;
        }
        entry.push_back(nums[i]);
        backtrack(nums,entry,i+1);
        entry.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        backtrack(nums,entry,i+1);
    }
};
