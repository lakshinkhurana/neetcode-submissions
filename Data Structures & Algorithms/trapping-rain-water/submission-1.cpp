class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        if(height.empty())return res;
        int l=0,r=height.size()-1;
        int leftMax=height[l],rightMax=height[r];
        while(l<r){
            if(leftMax>rightMax){
                r--;
                rightMax=max(rightMax,height[r]);
                res+=rightMax-height[r];
            }else{
                l++;
                leftMax=max(leftMax,height[l]);
                res+=leftMax-height[l];
            }
        }
        return res;
    }
};
