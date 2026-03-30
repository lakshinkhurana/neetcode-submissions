class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r = *max_element(piles.begin(), piles.end());
        int res=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(satisfy(piles,h,mid)<=h){
                res=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return res;
    }
    long long satisfy(vector<int>& piles , int h , int k){
        long long  res=0;
        for(int i=0;i<piles.size();i++){
            res+=ceil(static_cast<double>(piles[i])/k);
        }
        return res;
    }
};
