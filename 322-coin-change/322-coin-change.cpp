class Solution {
public:
    int mincoins(vector<int>&a,int n,int amt,vector<vector<int>>&dp)
    {
         
        if(n==0 || amt==0){
           if(amt==0)
             {
               return 0;
           }
            else{
                return 1e7;
            }
     }
       if(dp[n][amt]!=-1) return dp[n][amt];
        if(a[n-1]<=amt)
        {
            return dp[n][amt]=min(1+mincoins(a,n,amt-a[n-1],dp),mincoins(a,n-1,amt,dp));
            
        }
        else{
           return dp[n][amt]= mincoins(a,n-1,amt,dp);
        }
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=mincoins(coins,coins.size(),amount,dp);
       return  ans==1e7?-1:ans;
    }
};