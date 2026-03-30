class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=piles[0];
        for(int i=0;i<n;i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        int l=1,r=max;
        int res=r;
        while(l<=r){
            int k=l+(r-l)/2;
            long long hours=0;
            for(int p:piles){
                hours+=ceil(static_cast<double>(p)/k);
            }
            if(hours<=h){
                res=k;
                r=k-1;
            }else{
                l=k+1;
            }
        }
        return res;
    }
};
