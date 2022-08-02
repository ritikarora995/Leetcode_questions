class Solution {
public:
    bool isPowerOfFour(int n) {
        long long int c=1;
    while(c<n){
        c=c*4;
    }
        if(c==n) return true;
        else return false;
    }
};