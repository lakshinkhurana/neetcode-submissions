class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {
            {']', '['},
            {'}', '{'},
            {')', '('}
        };
        stack<char>stk;
        for(char c:s){
            if(map.count(c)){
                if(!stk.empty() && stk.top()==map[c])stk.pop();
                else return false;
            }else stk.push(c);
        }
        return stk.empty();
    }
};
