class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        int res=0;
        stack<int> stack;
        for(const string& val:tokens){
            if(val=="+"){
                int a=stack.top();stack.pop();
                int b=stack.top();stack.pop();
                stack.push(b+a);
            }else if(val=="-"){
                int a=stack.top();stack.pop();
                int b=stack.top();stack.pop();
                stack.push(b-a);
            }else if(val=="*"){
                int a=stack.top();stack.pop();
                int b=stack.top();stack.pop();
                stack.push(b*a);
            }else if(val=="/"){
                int a=stack.top();stack.pop();
                int b=stack.top();stack.pop();
                stack.push(b/a);
            }else{
                stack.push(stoi(val));
            }
        }
        return stack.top();
    }
};
