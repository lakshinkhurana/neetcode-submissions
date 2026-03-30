class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>entry;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,entry,target,0);
        return res;
    }
    void dfs(vector<int>& candidates, vector<int>& entry , int target , int i){
        if(target==0){
            res.push_back(entry);
            return;
        }
        if(target<0 || i==candidates.size())return;
        entry.push_back(candidates[i]);
        dfs(candidates,entry,target-candidates[i],i+1);
        entry.pop_back();
        while(candidates[i]==candidates[i+1] && i+1<candidates.size())i++;
        dfs(candidates,entry,target,i+1);
    }
};
