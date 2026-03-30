class Solution {
public:
    int fibonacci(int n){
        int sum=1;
        if(n<=0){
            return sum;
        }else{
            sum+=fibonacci(n-1)+fibonacci(n-2);
        }
    }
    int climbStairs(int n) {
        return fibonacci(n-1);
    }
};
