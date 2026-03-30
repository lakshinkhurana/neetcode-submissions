class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int count=0;
        unordered_set<char> charSet;
        while(l<=r && r<s.size()){
            if(charSet.find(s[r])==charSet.end()){
                charSet.insert(s[r]);
                count=max(count,r-l+1);
                r++;
            }else{
                charSet.erase(s[l]);
                l++;
            }
        }
        return count;
    }
};
