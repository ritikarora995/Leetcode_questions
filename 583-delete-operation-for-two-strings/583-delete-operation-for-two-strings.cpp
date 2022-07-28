class Solution {
public:
    int minDistance(string s1, string s2) {
        // return 1;
        int n=s1.length();
      
        int m=s2.length();
         // cout<<n<<" "<<m<<endl;
        int maxx=0;
        int dp[n+1][m+1];
        for(int i=0;i<= n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                       maxx=max(maxx,dp[i][j]);
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                  }
            
            }
        }
        // cout<<maxx<<endl;
        return n+m-2*maxx;
    }
};