class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>entry;
        backtrack(entry,nums,target,0);
        return res;
    }
    void backtrack(vector<int>& entry,vector<int>& nums,int target, int i){
        if(target==0){
            res.push_back(entry);
            return;
        }
        if(target<0 || i>=nums.size()){
            return;
        }
        entry.push_back(nums[i]);
        backtrack(entry,nums,target-nums[i],i);
        entry.pop_back();
        backtrack(entry,nums,target,i+1);   
    }
};
