class Solution {
public:
    int abc(int m,int n,vector<vector<int>>&dp){
        // cout<<m<<n<<c<<endl;
        if(m==1 && n==1){
           
            return 1;
        }
        if(m<1 || n<1){
            return 0;
        }
        
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        
        
        dp[m][n]=abc(m,n-1,dp)+ abc(m-1,n,dp);
       return dp[m][n];
    }
    int uniquePaths(int m, int n) {
    
     
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      return abc(m,n,dp);
        
      
        
    }
};