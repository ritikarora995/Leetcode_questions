class Solution {
public:
    double knightProbability(int n, int k, int row1, int col1) {
        double curr[n][n];
        double next[n][n];
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++) {
                 curr[i][j]=0;
                 // next[i][j]=0;
             }
        }
        
            
        int x[8]={2,2,1,1,-2,-2,-1,-1};
        int y[8]={1,-1,2,-2,1,-1,2,-2};
         curr[row1][col1]=1;
        for(int i=0;i<k;i++){
             double next[n][n];
            for(int dd=0;dd<n;dd++){
             for(int zz=0;zz<n;zz++) {
                 // curr[i][j]=0;
                 next[dd][zz]=0;
             }
        }
            for(int row=0;row<n;row++){
                for(int col=0;col<n;col++){
                    if(curr[row][col]!=0){
                        for(int z=0;z<8;z++){
                            int ni=0,nj=0;
                            ni=row+x[z] ;
                            nj=col+y[z] ; 
                            if(ni>=0 && nj>=0 && ni<n && nj<n){
                                next[ni][nj]+=curr[row][col]/8.0;
                                // cout<<next[ni][nj]<<" ";
                            }
                        }
                    }
                }
            }
// std::copy(next, next + n, curr);
            for(int ss=0;ss<n;ss++){
                for(int mm=0;mm<n;mm++){
                    curr[ss][mm]=next[ss][mm];}}
       
            
        }
    
    double sum=0;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             // cout<<curr[i][j]<<" ";
        sum+=curr[i][j];
    }
    }
    return sum;
}    
};