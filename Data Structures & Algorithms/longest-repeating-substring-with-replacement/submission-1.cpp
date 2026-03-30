class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map;
        int n=s.length(),res=0,l=0,maxF=0;
        for(int r=0;r<n;r++){
            map[s[r]]++;
            maxF=max(maxF,map[s[r]]);
            while((r-l+1)-maxF>k){
                map[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
