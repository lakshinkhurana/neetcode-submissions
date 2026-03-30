class Solution {
public:
    vector<int>memo;
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),prefix=0,suffix=0,res=nums[0];
        for(int i=0;i<n;i++){
            prefix=nums[i]*(prefix==0?1:prefix);
            suffix=nums[n-i-1]*(suffix==0?1:suffix);
            res=max(res,max(prefix,suffix));
        }
        return res;   
    }
    
};
