class Solution {
public:
    vector<int>dp;
    int dfs(vector<int>& nums, int i){
        if(dp[i]!=-1)return dp[i];
        int l=1;
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]<nums[j]){
                l=max(l,1+dfs(nums,j));
            }
        }
        return dp[i]=l;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        dp.assign(n,-1);
        int maxL=1;
        for(int i=0;i<n;i++){
            maxL=max(maxL,dfs(nums,i));
        }
        return maxL;
    }
};
