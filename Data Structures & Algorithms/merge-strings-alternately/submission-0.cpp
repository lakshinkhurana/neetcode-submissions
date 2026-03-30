class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=0,l2=0;
        string s;
        while(l1<word1.size() && l2<word2.size()){
            s+=word1[l1++];
            s+=word2[l2++];
        }
        s+=word1.substr(l1);
        s+=word2.substr(l2);
        return s;
    }
};