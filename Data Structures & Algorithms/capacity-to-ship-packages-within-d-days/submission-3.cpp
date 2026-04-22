class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int r=accumulate(weights.begin(),weights.end(),0),l=*max_element(weights.begin(),weights.end());
        int res=r;
        while(l<=r){
            int m=l+(r-l)/2;
            if(timeTaken(weights,m)>days)l=m+1;
            else{
                res=m;
                r=m-1;
            }
        }
        return res;
    }
    int timeTaken(vector<int>& weights,int val){
        int check=1;
        int k=val;
        for(int weight:weights){
            if(weight>k || k==0){
                k=val;
                check++;
            }k-=weight;
        }
        return check;
    }
};