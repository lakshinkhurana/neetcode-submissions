class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>entry;
        dfs(nums,entry,0);
        return res;
    }
    void dfs(vector<int>& nums,vector<int>& entry,int i){
        if(i==nums.size()){
            res.push_back(entry);
            return;
        }
        entry.push_back(nums[i]);
        dfs(nums,entry,i+1);
        entry.pop_back();
        dfs(nums,entry,i+1);
    }
};
