class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        while(l<r){
            int m=l+(r-l)/2;
            int i=cur(piles,m);
            if(i>h){
                l=m+1;
            }else if(i<=h){
                r=m;
            }
        }
        return l;
    }
    int cur(vector<int>& piles,int k){
        int j=0;
        for(int num:piles){
            j+=(num+k-1)/k;
        }
        return j;
    }
};
