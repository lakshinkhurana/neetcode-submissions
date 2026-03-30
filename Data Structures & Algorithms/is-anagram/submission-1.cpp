class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> first;
        unordered_map<char,int> second;
        for(char f:s){
            first[f]+=1;
        }
        for(char f:t){
            second[f]+=1;
        }
        return first==second;
    }
};
