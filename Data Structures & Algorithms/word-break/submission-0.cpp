class Solution {
public:
    vector<bool> dp;
    bool wordBreak(string s, vector<string>& wordDict) {
        dp.resize(s.size(),false);
        dp[s.size()]=true;
        for(int i=s.size();i>=0;i--){
            for(const auto& w:wordDict){
                if(i+w.size()<=s.size() && s.substr(i,w.size())==w){
                    dp[i]=dp[i+w.size()];
                }
                if(dp[i])break;
            }
        }
        return dp[0];
    }
};
