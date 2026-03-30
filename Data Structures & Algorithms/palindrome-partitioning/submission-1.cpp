class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        vector<string> entry;
        dfs(entry,s,0);
        return res;
    }
    void dfs(vector<string>& entry,const string& s, int i){
        if(i>=s.length()){
            res.push_back(entry);
            return;
        }
        for(int j=i;j<s.length();j++){
            if(isPali(s,i,j)){
                entry.push_back(s.substr(i,j-i+1));
                dfs(entry,s,j+1);
                entry.pop_back();
            }
        }

    }
    bool isPali(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }else{
                l++;
                r--;
            }
        }return true;
    }
};
