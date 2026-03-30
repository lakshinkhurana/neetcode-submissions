class Solution {
public:
    unordered_map<char,string> digiMap = {
        {'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
        {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}
    };
    vector<string> res;
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        string entry;
        dfs(entry,digits,0);
        return res;
    }
    void dfs(string& entry,string& s,int i){
        if(i>=s.size()){
            res.push_back(entry);
            return;
        }
        string k=digiMap[s[i]];
        for(char ch:k){
            entry.push_back(ch);
            dfs(entry,s,i+1);
            entry.pop_back();
        }
    }
};
