class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        string str;
        int open=0;
        int close=0;
        paranthesis(str,open,close,n);
        return res;
    }
    void paranthesis(string &str,int open,int close,int n){
        if(open==n && close==n){
            res.push_back(str);
        }
        
        if(open<n){
            str+='(';
            paranthesis(str,open+1,close,n);
            str.pop_back();
        }
        if(close<open){
            str+=')';
            paranthesis(str,open,close+1,n);
            str.pop_back();
        }
        
    }
};
