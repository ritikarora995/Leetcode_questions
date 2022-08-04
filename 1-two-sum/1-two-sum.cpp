class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int>umap;
        int m;
        vector<int>v;
        for(int i=0;i<a.size();i++){
            m=target-a[i];
            if(umap.count(m)>0)
            {
             v.push_back(i);
             v.push_back(umap[m]);
              return v;
            }
            else{
                umap[a[i]]=i;
            }
        }
        return v;
    }
};