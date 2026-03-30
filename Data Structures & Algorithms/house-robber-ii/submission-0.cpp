class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> memo1(n, -1);
        vector<int> memo2(n, -1);

        int case1 = dfs(nums, 0, n - 2, memo1); // rob [0 ... n-2]
        int case2 = dfs(nums, 1, n - 1, memo2); // rob [1 ... n-1]

        return max(case1, case2);
    }

private:
    int dfs(vector<int>& nums, int i, int end, vector<int>& memo) {
        if (i > end) return 0;
        if (memo[i] != -1) return memo[i];
        int pick = nums[i] + dfs(nums, i + 2, end, memo);
        int skip = dfs(nums, i + 1, end, memo);
        memo[i] = max(pick, skip);
        return memo[i];
    }
};
