class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int>v;
        int n=a.size();
        int m=a[0].size();
        int drn=1;
        int top=0,bottom=n-1,left=0,right=m-1;
        
        int c=0;
        while(c!=n*m){
            
            if(drn==1){
                for(int i=left;i<=right;i++) {
                    v.push_back(a[top][i]);
                    c++;
                }
                top++;
                
                drn=2;
            }
            else if(drn==2){
                for(int i=top;i<=bottom;i++){
                    
                 v.push_back(a[i][right]);
                    c++;}
                right--;
                drn=3; 
            }
            else if(drn==3){
                for(int i=right;i>=left;i--) {
                    v.push_back(a[bottom][i]);
                    c++;
                }
                bottom--;
                drn=4;
            }
            else if(drn==4){
                 for(int i=bottom;i>=top;i--) {
                     v.push_back(a[i][left]);
                     c++;
                 }
                left++;
                drn=1;
            }
    }
        return v;
    }
};