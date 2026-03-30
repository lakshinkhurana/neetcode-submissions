class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>heap;
        for(int s:stones){
            heap.push(s);
        }
        while(heap.size()>1){
            int first=heap.top();
            heap.pop();
            int second=heap.top();
            heap.pop();
            if(second<first){
                heap.push(first-second);
            }
        }
        heap.push(0);
        return heap.top();
    }
};
