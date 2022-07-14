class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int R=a.size();
        int C=a[0].size();
        bool iscol=false;
        
        for(int i=0;i<R;i++){
            if(a[i][0]==0){
                iscol=true;
            }
            for(int j=1;j<C;j++){
                if(a[i][j]==0){
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }}
           for(int i=1;i<R;i++){
               for(int j=1;j<C;j++){
                   if(a[i][0]==0 || a[0][j]==0){
                       a[i][j]=0;
                   }
               }}
            if(a[0][0]==0){
                for(int j=0;j<C;j++){
                    a[0][j]=0;
                }
            }
            if(iscol){
                for(int i=0;i<R;i++){
                    a[i][0]=0;
                }
            }
    }
};