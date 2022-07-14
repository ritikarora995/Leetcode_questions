class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
         vector<vector<int>>ans(a[0].size(),vector<int>(a.size(),0));
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                 swap(a[i][j],ans[j][i]);
            }
        }
        // ans=a;
        return ans;
    }
};