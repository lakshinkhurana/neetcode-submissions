class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combine(int n, int k) {
        vector<int> entry;
        dfs(entry,1,n,k);
        return res;
    }
    void dfs(vector<int>& entry,int i,int n,int k){
        if(entry.size()==k){
            res.push_back(entry);
            return;
        }
        for(int j=i;j<=n;j++){
            entry.push_back(j);
            dfs(entry,j+1,n,k);
            entry.pop_back();
        }
    }
};