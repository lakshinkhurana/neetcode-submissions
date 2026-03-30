class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (int cur : asteroids) {
            bool destroyed = false;
            while (!stk.empty() && cur < 0 && stk.top() > 0) {
                int top = stk.top();
                if(top+cur==0){
                    stk.pop();
                    destroyed=true;
                    break;
                }else if(abs(cur)>abs(top)){
                    stk.pop();
                }else{
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed)stk.push(cur);
        }
        vector<int> res;
        while (!stk.empty()) {
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};