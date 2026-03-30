class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int n = s.size(),res=0,l=0,maxF=0;
        for(int r =0 ; r < n ; r ++ ){
            freq[s[r]]++;
            maxF=max(maxF,freq[s[r]]);
            while((r-l+1)-maxF>k){
                freq[s[l]]--;
                l++;
            }

            res=max(res,(r-l+1));
        }
        return res;
    }
};
