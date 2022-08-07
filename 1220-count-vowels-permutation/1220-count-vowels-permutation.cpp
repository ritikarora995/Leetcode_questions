class Solution {
public:
  int x=1e9+7;
    int rec(char ch, int n,long int i,vector<vector<long int>>&dp){
        if(i==n) return 1;
        if(dp[ch-'a'][i]!=-1) return dp[ch-'a'][i]%x;
        if(ch=='a')
        {   dp[ch-'a'][i]=rec('e',n,i+1,dp);
            return dp[ch-'a'][i];
        }
        else if(ch=='e')
        {
            dp[ch-'a'][i]= (rec('a',n,i+1,dp)+rec('i',n,i+1,dp))%x;
             return dp[ch-'a'][i];
        }
        else if (ch=='i'){
            dp[ch-'a'][i]=(((rec('a',n,i+1,dp)+rec('e',n,i+1,dp))%x+rec('o',n,i+1,dp))%x+rec('u',n,i+1,dp))%x;
            return dp[ch-'a'][i]%x;
        }
        else if(ch=='o'){
            dp[ch-'a'][i]=( rec('i',n,i+1,dp)+rec('u',n,i+1,dp))%x;
            return dp[ch-'a'][i]%x;
        } 
        else if(ch=='u') {
            dp[ch-'a'][i]=(rec('a',n,i+1,dp))%x;
            return dp[ch-'a'][i]%x;
        }
        return ((((rec('a',n,i+1,dp)+rec('e',n,i+1,dp))%x+rec('i',n,i+1,dp))%x+rec('o',n,i+1,dp))%x+rec('u',n,i+1,dp))%x;
    }
    int countVowelPermutation(int n)
    {
         char ch='z';
         vector<vector<long int>>dp(26,vector<long int>(n+1,-1));
         return rec(ch,n,0,dp);
    }
};