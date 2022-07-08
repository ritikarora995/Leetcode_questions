class Solution {
public:
   int total = 0;
    int solve(vector<int>& nums,int sum,int target,int begin,vector<vector<int>> &dp)
    {
        if(begin==nums.size() && target == sum)
            return 1;
        else if(begin==nums.size())
            return 0;
        if(dp[begin][sum+1001]!=-1)
            return dp[begin][sum+1001];
        int result = solve(nums,sum-nums[begin],target,begin+1,dp) +
            solve(nums,sum+nums[begin],target,begin+1,dp);
        return dp[begin][sum+1001]=result;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n =  nums.size();
        for(auto num:nums) total+=num;
        vector<vector<int>> dp(n+1,vector<int>(2*1000+2,-1));
        return solve(nums,0,target,0,dp);
    }

};