class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        unordered_map<char,int> mapt;
        for(char c:s){
            map[c]+=1;
        }
        for(char c:t){
            mapt[c]+=1;
        }
        return map==mapt;
    }
};
