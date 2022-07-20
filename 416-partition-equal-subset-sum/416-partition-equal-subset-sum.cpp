class Solution {
public:
     bool subsetsum(vector<int>&arr,vector<vector<int>>&dp, int sum,int target,int i){
        // cout<<sum<<endl;
        if(sum>target){
            return 0;
        }
        else if(sum==target){
            return 1;
        }
       
        if(i==arr.size()){
            return 0;
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        if(arr[i]>target){
            return dp[i][sum]=subsetsum(arr,dp,sum,target,i+1);
        }
       
        // cout<<sum<<endl;
        return dp[i][sum]=subsetsum(arr,dp,sum+arr[i],target,i+1) || subsetsum(arr,dp,sum,target,i+1);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2==0){
          
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return subsetsum(nums,dp,0,sum/2,0);
        }
        return 0;
       
    }
};