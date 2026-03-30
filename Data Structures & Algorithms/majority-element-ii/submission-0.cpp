class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        int major=n/3;
        unordered_map<int,int> hash;
        for(int num:nums){
            if(hash.find(num)==hash.end()){
                hash[num]=1;
            }else hash[num]++;
        }
        for(const auto& entry:hash){
            if(entry.second>major){
                res.push_back(entry.first);
            }
        }
        return res;
    }
};