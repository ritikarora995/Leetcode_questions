class Solution 
{
public:
   
    int possibleways(int d,int f,int target,vector<vector<int>>&dp){
        if(d<0)return 0;
         if(target < 0) return 0;
        if( d==0 && target<0)return 0;
        if(d==0 && target==0) return 1;
        
        long int ways=0;
        if(dp[d][target]!=-1){
            return dp[d][target];
        }
        for(int i=1;i<=f;i++) ways=(ways+possibleways(d-1,f,target-i,dp))%1000000007;
        return dp[d][target]=ways;
    }
    int numRollsToTarget(int d, int f, int target)
    {
        vector<vector<int>>dp(d+1,vector<int>(target+1,-1));
       return possibleways(d,f,target,dp);
    }
};