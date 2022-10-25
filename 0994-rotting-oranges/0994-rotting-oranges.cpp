class Solution {
public:
       bool isvalid(int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m) return 0;
        return 1;
    }
    int countFreshOranges=0;
    int orangesRotting(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        // vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;    i<n;i++){
         for(int j=0;j<m;j++){  
             if(mat[i][j]==2) {
                 q.push({i,j});
                 // ans[i][j]=0;
             }
             
               if(mat[i][j]==1) countFreshOranges++; 
        }}
        int maxx=0;
            while(countFreshOranges != 0  && !q.empty()){
                
             
                int qsize=q.size();
                // q.pop();
                for(int i=0;i<qsize;i++){
                int curr_x=q.front().first;
                int curr_y=q.front().second;
                    q.pop();
                if(isvalid(curr_x-1,curr_y,n,m)==1 && mat[curr_x-1][curr_y]==1 )                 {
                    q.push({curr_x-1,curr_y});
                    mat[curr_x-1][curr_y]=2;
                    countFreshOranges--;
                }
                 if(isvalid(curr_x+1,curr_y,n,m)==1 && mat[curr_x+1][curr_y]==1 )                 {
                    q.push({curr_x+1,curr_y});
                    mat[curr_x+1][curr_y]=2;
                     countFreshOranges--;

                }
                 if(isvalid(curr_x,curr_y+1,n,m)==1 && mat[curr_x][curr_y+1]==1 )                 {
                    q.push({curr_x,curr_y+1});
                                         countFreshOranges--;

                    mat[curr_x][curr_y+1]=2;
                }
                 if(isvalid(curr_x,curr_y-1,n,m)==1 && mat[curr_x][curr_y-1]==1 )                 {
                    q.push({curr_x,curr_y-1});
                     countFreshOranges--;
                    mat[curr_x][curr_y-1]=2;
                }
                }
                // cout<<curr_x<<" "<<curr_y<<endl;
                maxx++;
                
            }
        return countFreshOranges==0 ?maxx:-1;
    }
};