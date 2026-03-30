class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> entry;
        dfs(entry,nums,0,target);
        return res;
    }
    void dfs(vector<int>& entry , vector<int>& nums, int i ,int target){
        if(target==0){
            res.push_back(entry);
            return;
        }
        if(target<0 || i>=nums.size())return;

        entry.push_back(nums[i]);
        dfs(entry,nums,i,target-nums[i]);
        entry.pop_back();
        dfs(entry,nums,i+1,target);
    }   
};
