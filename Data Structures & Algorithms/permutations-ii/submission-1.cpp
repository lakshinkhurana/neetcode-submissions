class Solution {
public:
    vector<vector<int>>res;
    vector<bool> boolArray;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        boolArray.resize(nums.size(),false);
        vector<int>entry;
        dfs(entry,nums);
        return res;
    }
    void dfs(vector<int>& entry,vector<int>& nums){
        if(entry.size()==nums.size()){
            res.push_back(entry);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(boolArray[i]) continue;
            if(i>0 && nums[i]==nums[i-1] && !boolArray[i-1])continue;
            entry.push_back(nums[i]);
            boolArray[i]=true;
            dfs(entry,nums);
            boolArray[i]=false;
            entry.pop_back();
        }
    }
};