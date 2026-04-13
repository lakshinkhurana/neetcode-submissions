class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=min(word1.size(),word2.size()),i=0;
        string final=word1.size()>word2.size()?word1:word2;
        string res;
        while(i<n){
            res+=word1[i];
            res+=word2[i];
            i++;
        }
        res+=final.substr(i);
        return res;

    }
};