class Solution {
public:
    long long sum(long long n){
        long long res=0;
        while(n!=0){
            res+=n%10;
            n=n/10;
        }
        return res;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long no=n;
        long long base=1;
        while(sum(n)>target){
            n=n/10+1;
            base=base*10;
        }
        return n*base-no;
        
    }
};