class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        // vector<vector<int>>v;
        unordered_map<int,vector<int>>umap;
        int n=mat[0].size();
        int m=mat.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                umap[i-j].push_back(mat[i][j]);
            }
        }
        for(int i=-(n+1);i<m;i++){
            sort(umap[i].begin(),umap[i].end());
        }
        for(int i=m-1;i>=0;i--){
          for(int j=n-1;j>=0;j--){
              mat[i][j]=umap[i-j].back();
              umap[i-j].pop_back();
          }
        }
        return mat;
    }
};