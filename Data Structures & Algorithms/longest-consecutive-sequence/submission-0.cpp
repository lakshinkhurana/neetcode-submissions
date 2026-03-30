class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> set(n);
        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }
        int seq=0;
        for(int i:set){
            if(set.find(i-1)==set.end()){
                int length=0;
                while(set.find(i+length)!=set.end()){
                    length++;
                }
                seq=max(seq,length); 
            }
        }
        return seq;
    }
};
