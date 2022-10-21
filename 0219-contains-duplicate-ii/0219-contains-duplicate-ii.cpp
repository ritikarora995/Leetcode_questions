class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>umap;
       for(int i=0;i<nums.size();i++)
       {
           if(umap[nums[i]].size()>0 && abs(i-umap[nums[i]].back())<=k){
            return 1;
           }
           umap[nums[i]].push_back(i);
          
       } 
       // for(int i=0;)
        return 0;
    }
};