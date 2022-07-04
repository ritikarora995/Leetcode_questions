class Solution {
public:
       int climbStairs1(int n,vector<int>&dp) {
     
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
         if(n==0){
            return 1;
        }
        return dp[n]=climbStairs1(n-1,dp)+climbStairs1(n-2,dp);
    }
       
    
    int climbStairs(int n) {
         vector<int>dp(n+1,-1);
        return climbStairs1(n,dp);
    }
};