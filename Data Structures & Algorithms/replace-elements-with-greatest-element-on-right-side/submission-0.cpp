class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(),maxVal=arr[n-1];
        vector<int> res(n,0);
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                res[i]=-1;
            }else{
                res[i]=maxVal;
                maxVal=max(arr[i],maxVal);
            }
        }
        return res;
    }
};