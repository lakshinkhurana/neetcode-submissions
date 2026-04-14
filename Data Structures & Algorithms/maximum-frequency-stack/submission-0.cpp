class FreqStack {
public:
    unordered_map<int,int>hMap;
    priority_queue<vector<int>>heap;
    int index;
    FreqStack():index(0) {}
    
    void push(int val) {
        hMap[val]++;
        heap.push({hMap[val],index++,val});
    }
    
    int pop() {
        auto top = heap.top();
        heap.pop();
        int val=top[2];
        hMap[val]--;
        return val;
    }
};