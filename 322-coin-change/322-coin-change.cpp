class Solution {
public:
    int coinChange(vector<int>& a, int amount) {
        int n=a.size();
      vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(j==0){
                    dp[i][j]=0;
                }
                else if(i==0)
                {
                 dp[i][j]=1e5;
                }
                
                else if(a[i-1]<=j)
                {
                dp[i][j]=min(0+dp[i-1][j],1+dp[i][j-a[i-1]]);
                }
               else{
                  dp[i][j]=0+dp[i-1][j];
                 }
                        
            }
        }
            return dp[n][amount]==1e5?-1:dp[n][amount];
    }
};