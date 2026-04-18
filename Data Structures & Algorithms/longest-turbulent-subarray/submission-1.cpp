class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return 1;
        int maxLen=1,curLen=1;
        bool flip;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                curLen=1;
            } else if(curLen==1){
                curLen=2;
                flip=arr[i]>arr[i-1];
            } else {
                bool currRose=arr[i]>arr[i-1];
                if(currRose==flip){
                    curLen=2;
                    flip=currRose;
                } else {
                    curLen++;
                    flip=!flip;
                }
            }
            maxLen=max(maxLen,curLen);
        }
        return maxLen;
    }
};