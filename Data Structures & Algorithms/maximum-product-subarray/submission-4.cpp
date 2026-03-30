class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1,suffix=1;
        int res=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            prefix=nums[i]*(prefix==0?1:prefix);
            suffix=nums[n-i-1]*(suffix==0?1:suffix);
            res=max(res,max(prefix,suffix));
        }
        return res;
    }
};
