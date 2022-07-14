class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
      set<int>si;
        set<int>sy;
        for(int i=0;i<a.size();i++){
             for(int j=0;j<a[0].size();j++){
                 if(a[i][j]==0){
                      si.insert(i);
                      sy.insert(j);
                 }
             }}
        //  for (auto it = si.begin(); it != si.end(); it++)
        // cout << *it << " ";
        
        for(int i=0;i<a.size();i++){
             for(int j=0;j<a[0].size();j++){
                if(si.count(i)>0 || sy.count(j)>0){
                    a[i][j]=0;
                }
             }}
        
    }
};