class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=prices[1]-prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j]-prices[i]>maxprof){
                    maxprof=prices[j]-prices[i];
                }
            }
        }
        if(maxprof<0){
            return 0;
        }
        return maxprof;
    }
};
