int fibonacciSum(int n){
    int sum=0,a=1,b=1;
    if(n<=1){
        return 1;
    }
    for(int i=2;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }return sum;
}

class Solution {
public:
    int climbStairs(int n) {
        return fibonacciSum(n);
    }
};
