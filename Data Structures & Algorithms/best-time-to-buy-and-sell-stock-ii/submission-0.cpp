class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int res=0;
        int n=prices.size();
        for(int r=0;r<n;r++){
            if(prices[l]>prices[r]){
                l=r;
            }else{
                res+=(prices[r]-prices[l]);
                l=r;
            }
        }
        return res;
    }
};