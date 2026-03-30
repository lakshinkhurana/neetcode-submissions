class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>stk;
        for(auto& op:operations){
            if(op=="+"){
                int top1=stk.top();stk.pop();
                int top2=stk.top();stk.pop();
                int newScore=top1+top2;
                stk.push(top2);
                stk.push(top1);
                stk.push(newScore);
            }
            else if(op=="C")stk.pop();
            else if(op=="D")stk.push(stk.top()*2);
            else stk.push(stoi(op));

        }
        int res=0;
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        return res;
    }
};