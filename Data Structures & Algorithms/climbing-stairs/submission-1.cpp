int fibonacciSum(int n){
    int sum=0;
    if(n==0||n==1){
        return 1;
    }else{
        sum=fibonacciSum(n-1)+fibonacciSum(n-2);
    }
    return sum;
}



class Solution {
public:
    int climbStairs(int n) {
        return fibonacciSum(n);
    }
};
