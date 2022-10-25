class Solution {
public:
      bool isvalid(int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m) return 0;
        return 1;
    }
    int maxDistance(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){  
             if(mat[i][j]==1) {
                 q.push({i,j});
                 ans[i][j]=0;
             }
        }}
            while(!q.empty()){
                int curr_x=q.front().first;
                int curr_y=q.front().second;
                if(isvalid(curr_x-1,curr_y,n,m)==1 && ans[curr_x-1][curr_y]==-1 )                 {
                    q.push({curr_x-1,curr_y});
                    ans[curr_x-1][curr_y]=ans[curr_x][curr_y]+1;
                }
                 if(isvalid(curr_x+1,curr_y,n,m)==1 && ans[curr_x+1][curr_y]==-1 )                 {
                    q.push({curr_x+1,curr_y});
                    ans[curr_x+1][curr_y]=ans[curr_x][curr_y]+1;
                }
                 if(isvalid(curr_x,curr_y+1,n,m)==1 && ans[curr_x][curr_y+1]==-1 )                 {
                    q.push({curr_x,curr_y+1});
                    ans[curr_x][curr_y+1]=ans[curr_x][curr_y]+1;
                }
                 if(isvalid(curr_x,curr_y-1,n,m)==1 && ans[curr_x][curr_y-1]==-1 )                 {
                    q.push({curr_x,curr_y-1});
                    ans[curr_x][curr_y-1]=ans[curr_x][curr_y]+1;
                }
                q.pop();
            }
        int maxx=INT_MIN;
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++) maxx=max(maxx,ans[i][j]);
              // cout<<endl;
          }
        if(maxx==0) return -1;
            return maxx;
    }
};