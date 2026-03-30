class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        int res=r;
        while(l<=r){
            int m=l+(r-l)/2;
            if(canShip(weights,days,m)){
                res=min(res,m);
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return res;
    }
    bool canShip(const vector<int>&weights,int days,int cap){
        int ships=1,curCap=cap;
        for(int w:weights){
            if(w>curCap){
                ships++;
                if(ships>days)return false;
                curCap=cap;
            }
            curCap-=w;
        }
        return true;
    }
};