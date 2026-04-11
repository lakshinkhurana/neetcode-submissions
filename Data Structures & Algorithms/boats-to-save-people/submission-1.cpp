class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0,r=people.size()-1;
        int res=0;
        // [1,2,2,3,3] , 3
        //[1,2,4,5] , 6
        //[3,3,4,5] , 5
        while(l<=r){
            int remain=limit-people[r--];
            res++;
            if(l<=r && remain>=people[l])l++;
        }
        return res;
    }
};