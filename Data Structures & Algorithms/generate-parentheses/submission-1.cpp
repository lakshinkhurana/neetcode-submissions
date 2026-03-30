class Solution {
public:
    vector<string>res;
    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        string entry;
        dfs(entry,open,close,n);
        return res;
    }
    void dfs(string entry,int open,int close,int n){
        if(open==n && close==n){
            res.push_back(entry);
        }
        if(open<n){
            entry+='(';
            dfs(entry,open+1,close,n);
            entry.pop_back();
        }
        if(close<open){
            entry+=')';
            dfs(entry,open,close+1,n);
            entry.pop_back();
        }
    }
};
