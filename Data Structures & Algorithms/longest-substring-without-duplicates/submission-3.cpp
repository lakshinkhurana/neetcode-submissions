class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int l=0,r=0;
        unordered_set<char> charSet;
        while(l<=r && r<s.size()){
            if(charSet.find(s[r])==charSet.end()){
                charSet.insert(s[r]);
                res=max(res,r-l+1);
                r++;
            }else{
                charSet.erase(s[l]);
                l++;
            }
        }
        return res;
    }
};
