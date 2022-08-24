class Solution {
public:
  bool isPalindrome (string & s, int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++; j--;
        }
        return true;
    }

    int solve(string s,int i,int j,vector<vector<int>>&dp){
        // cout<<i<<j<<endl;
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(isPalindrome(s,i,j)==1)
        {
            return 0;
        }
        int ans=INT_MAX;
        for(int k=i;k<j;k++)
        {        if(isPalindrome(s, i, k)){                         
                int temp = solve (s, k+1, j, dp) + 1;
                ans = min (ans, temp);
            }

       
            // abba b
        }
        
        return dp[i][j]=ans;
    }
    int minCut(string s) {
        vector<vector<int>>dp(s.length()+1,vector<int>(s.length()+1,-1));
        return solve(s,0,s.length()-1,dp);
    }
};