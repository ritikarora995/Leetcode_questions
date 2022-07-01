class Solution {
public:
    int fib1[31];
    // vector<int>v;
    int fib(int n) {
        if(n<=1){
           fib1[n]=n;
            return fib1[n];
        }
        fib1[n]=fib(n-1)+fib(n-2);
        return fib1[n];
    }
};