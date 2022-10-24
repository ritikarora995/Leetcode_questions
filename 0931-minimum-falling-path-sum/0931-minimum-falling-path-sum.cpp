class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int rows=mat.size(),cols=mat.size();
       for(int row=1;row<rows;row++){
           for(int col=0;col<cols;col++){
               if(col==0)
               {
                   int mid=mat[row-1][col];
                   int ryt=mat[row-1][col+1];
                  mat[row][col]+= min(mid,ryt);
               }
               else if(col==cols-1){
                   int mid=mat[row-1][col];
                   int lft=mat[row-1][col-1];
                   mat[row][col]+=min(mid,lft);
               }
               else{
                   int mid=mat[row-1][col];
                   int lft=mat[row-1][col-1]; 
                   int ryt=mat[row-1][col+1];
                   mat[row][col]+=min(mid,min(ryt,lft));
               }
           }
       } 
        int ans=INT_MAX;
              for(int col=0;col<cols;col++){
                  ans=min(ans,mat[rows-1][col]);}
        return ans;
    }
};