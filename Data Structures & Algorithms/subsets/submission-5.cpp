class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>entry;
        dfs(nums,entry,0,n);
        return res;
    }
    void dfs(vector<int>& nums,vector<int>& entry,int i,int n){
        if(i==n){
            res.push_back(entry);
            return;
        }
        entry.push_back(nums[i]);
        dfs(nums,entry,i+1,n);
        entry.pop_back();
        dfs(nums,entry,i+1,n);
    }
};
