class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        vector<int>entry;
        dfs(entry,n,k,1);
        return res;
    }
    void dfs(vector<int>& entry,int n,int k,int i){
        if(entry.size()==k){
            res.push_back(entry);
            return;
        }
        for(int j=i;j<=n;j++){
            entry.push_back(j);
            dfs(entry,n,k,j+1);
            entry.pop_back();
        }
        
    }
};