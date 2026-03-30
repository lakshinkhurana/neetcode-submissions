class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        stack<int> stk;
        vector<pair<int,double>> cars;
        for(int i=0;i<n;i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.rbegin(),cars.rend());
        int fleets=1;
        double prevTime=(double)(target-cars[0].first)/cars[0].second;
        for(int i=0;i<n;i++){
            double curTime=(double)(target-cars[i].first)/cars[i].second;
            if(curTime>prevTime){
                fleets++;
                prevTime=curTime;
            }
        }
        return fleets;

    }
};
