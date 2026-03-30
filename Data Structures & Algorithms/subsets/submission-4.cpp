class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>entry;
        dfs(entry,nums,0);
        return res;
    }
    void dfs(vector<int>& entry,vector<int>&nums,int i){
        if(i==nums.size()){
            res.push_back(entry);
            return;
        }
        entry.push_back(nums[i]);
        dfs(entry,nums,i+1);
        entry.pop_back();
        dfs(entry,nums,i+1);
    }
};
