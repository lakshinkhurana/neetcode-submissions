class Solution {
public:
    unordered_map<char,string> digiMap = {
        {'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
        {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}
    };
    vector<string>res;
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        int n=digits.size();
        string entry;
        combo(entry,digits,0);
        return res;
    }
    void combo(string entry,string digits,int i){
        if(i==digits.size()){
            res.push_back(entry);
            return;
        }
        string letters=digiMap[digits[i]];
        for(char ch:letters){
            entry.push_back(ch);
            combo(entry,digits,i+1);
            entry.pop_back();
        }
                      
    }
};
