class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>stk;
        vector<int>res(temperatures.size(),0);
        int cur=0;
        for(int i=0;i<temperatures.size();i++){
            int x=temperatures[i];
            while(!stk.empty() && x>stk.top().first){
                auto pair=stk.top();
                stk.pop();
                res[pair.second]=i-pair.second;
            }stk.push({x,i});
        }
        return res;
    }
};
