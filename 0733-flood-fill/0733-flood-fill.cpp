class Solution {
public:
    void dfs(vector<vector<int>>&image,int sr,int sc,int color,vector<vector<bool>>&visited,int m ,int n,int val){
      if((sr-1)>=0 && sr-1<m && sc>=0 && sc<n && val==image[sr-1][sc] && visited[sr-1][sc]==0){
      visited[sr-1][sc]=1;
      image[sr-1][sc]=color;    
      dfs(image,sr-1,sc,color,visited,m,n,val);
      }
  if((sr)>=0 && sr<m && sc-1>=0 && sc-1<n && val==image[sr][sc-1] && visited[sr][sc-1]==0){
      visited[sr][sc-1]=1;
      image[sr][sc-1]=color;    
      dfs(image,sr,sc-1,color,visited,m,n,val);
      }
    if((sr)>=0 && sr<m && sc+1>=0 && sc+1<n && val==image[sr][sc+1] && visited[sr][sc+1]==0){
      visited[sr][sc+1]=1;
      image[sr][sc+1]=color;    
      dfs(image,sr,sc+1,color,visited,m,n,val);
      }
        if((sr+1)>=0 && sr+1<m && sc>=0 && sc<n && val==image[sr+1][sc] && visited[sr+1][sc]==0){
      visited[sr+1][sc]=1;
      image[sr+1][sc]=color;    
      dfs(image,sr+1,sc,color,visited,m,n,val);
      }
    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)    {
        int m=image.size();
        int n=image[0].size();
        int val=image[sr][sc];
        image[sr][sc]=color;
        vector<vector<bool>>visited(m,vector<bool>(n,0));
        dfs(image,sr,sc,color,visited,m,n,val); 
        return image;
    }
};