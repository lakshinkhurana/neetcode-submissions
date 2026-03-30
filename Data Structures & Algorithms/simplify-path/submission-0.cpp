class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stk;
        string cur;
        for(char c:path+"/"){
            if(c=='/'){
                if(cur==".."){
                    if(!stk.empty())stk.pop_back();
                }
                else if(!cur.empty() && cur!="."){
                    stk.push_back(cur);
                }
                cur.clear();
            }else{
                cur+=c;
            }
        }
        string res="/";
        for(int i=0;i<stk.size();i++){
            if(i>0)res+="/";
            res+=stk[i];
        }
        return res;
    }
};