class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>dp(n,0);
   vector<int> temp(n,0);
        for(int i=0;i<m;i++){
           
             for(int j=0;j<n;j++){
                if( i==0 ||j==0 ){
                    temp[j]=1;
                }
                else{
                 temp[j]=dp[j]+temp[j-1];
                }
            }
            dp=temp;
        }
           return temp[n-1];
        
    }
};