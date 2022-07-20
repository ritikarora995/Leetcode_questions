class Solution {
public:
     bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
       for(int i=0;i<=n;i++) dp[i][0]=1;
       for(int j=0;j<=sum;j++) dp[0][j]=0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2==0){
          
        // vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return isSubsetSum(nums,sum/2);
        }
        return 0;
       
    }
};