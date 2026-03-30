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
        dfs(digits,entry,0);
        return res;
    }
    void dfs(string digits,string entry,int i){
        
        if(i>=digits.size()){
            res.push_back(entry);
            return;
        }
        string k=digiMap[digits[i]];
        for(char c:k){
            entry.push_back(c);
            dfs(digits,entry,i+1);
            entry.pop_back();
        }
    }
};
