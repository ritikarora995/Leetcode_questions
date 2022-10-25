class Solution {
public:
     bool isvalid(int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m) return 0;
        return 1;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& mat) {
       int n=mat.size();
        int m=mat[0].size();
        if(mat[0][0]==1 || mat[n-1][m-1]==1) return -1;
        queue<pair<int,int>>q;
        // vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
          q.push({0,0});
          mat[0][0]=1;
        int curr_x;
        int curr_y;
            while(!q.empty()){
               
                 curr_x=q.front().first;
                 curr_y=q.front().second;
                if(curr_x==n-1 && curr_y==m-1) return mat[curr_x][curr_y];
                if(isvalid(curr_x+1,curr_y,n,m)==1 && mat[curr_x+1][curr_y]==0){
                    q.push({curr_x+1,curr_y});
                   mat[curr_x+1][curr_y]=mat[curr_x][curr_y]+1;
                
                }
                if(isvalid(curr_x-1,curr_y,n,m)==1 && mat[curr_x-1][curr_y]==0){
                        q.push({curr_x-1,curr_y});
              mat[curr_x-1][curr_y]=mat[curr_x][curr_y]+1;
                }
                if(isvalid(curr_x,curr_y+1,n,m)==1 && mat[curr_x][curr_y+1]==0){
                       q.push({curr_x,curr_y+1});
                     mat[curr_x][curr_y+1]=mat[curr_x][curr_y]+1;
                }
                if(isvalid(curr_x,curr_y-1,n,m)==1 && mat[curr_x][curr_y-1]==0){
                     q.push({curr_x,curr_y-1});
                    mat[curr_x][curr_y-1]=mat[curr_x][curr_y]+1;
                }
                if(isvalid(curr_x+1,curr_y+1,n,m)==1 && mat[curr_x+1][curr_y+1]==0){
                            q.push({curr_x+1,curr_y+1});
               mat[curr_x+1][curr_y+1]=mat[curr_x][curr_y]+1;
                }
                if(isvalid(curr_x-1,curr_y-1,n,m)==1 && mat[curr_x-1][curr_y-1]==0){
                  q.push({curr_x-1,curr_y-1});
                   mat[curr_x-1][curr_y-1]=mat[curr_x][curr_y]+1;
                }
                if(isvalid(curr_x-1,curr_y+1,n,m)==1 && mat[curr_x-1][curr_y+1]==0){
                    q.push({curr_x-1,curr_y+1});
                    mat[curr_x-1][curr_y+1]=mat[curr_x][curr_y]+1;
                }
                if(isvalid(curr_x+1,curr_y-1,n,m)==1 && mat[curr_x+1][curr_y-1]==0){
                q.push({curr_x+1,curr_y-1});
                  mat[curr_x+1][curr_y-1]=mat[curr_x][curr_y]+1;
                }
    
                q.pop();
        }
   
        return -1;
        
    }
};