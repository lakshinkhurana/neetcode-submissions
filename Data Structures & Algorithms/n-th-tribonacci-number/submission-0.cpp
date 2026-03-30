class Solution {
public:
    vector<int> memo;
    int tribonacci(int n) {
        memo.assign(n+1,-1);
        return dp(n);
    }
    int dp(int n){
        if(n==0)return 0;
        if(n==1 || n==2)return 1;
        if(memo[n]!=-1)return memo[n];
        memo[n]=dp(n-1)+dp(n-2)+dp(n-3);
        return memo[n];
    }
};