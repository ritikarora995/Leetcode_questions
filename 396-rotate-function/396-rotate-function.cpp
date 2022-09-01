class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int F0=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            F0+=i*nums[i];
            sum+=nums[i];
        }
        vector<int>dp(nums.size());
        cout<<F0<<" ";
         dp[0]=F0;
        int maxx=dp[0];
        for(int i=1;i<nums.size();i++){
            dp[i]=dp[i-1]-nums.size()*nums[(nums.size()-i)]+sum;
maxx=max(maxx,dp[i]);
        // cout<<dp[i]<<" ";
        }
        return maxx;
    }
};
