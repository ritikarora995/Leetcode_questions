class Solution {
public:
    int total=0;
    int calculate(vector<int>&p,int sum,int target,int i,vector<vector<int>>&dp){
        if(p.size()==i){
            return sum==target;
        }
        if(dp[i][sum+total]!=-1){
            return dp[i][sum+total];
        }
        dp[i][sum+total]=calculate(p,sum+p[i],target,i+1,dp)+calculate(p,sum-p[i],target,i+1,dp);
        return dp[i][sum+total];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
          for( auto num:nums) total+=num;
        vector<vector<int>>dp(nums.size(),vector<int>(2*total+1,-1));
      
        return calculate(nums,0,target,0,dp);
    }
};