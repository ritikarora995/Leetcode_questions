class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<bool>>dp(n,vector<bool>(m,1));
        for(int j=0;j<m;j++) dp[0][j]=1;
           for(int i=0;i<n;i++) dp[i][0]=1;
           for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
            if(matrix[i][j]==matrix[i-1][j-1]) dp[i][j]=1;
            else return 0;
            }
        }
        
      return 1;
    }
};