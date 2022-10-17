class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int start=0;
        int minstart=0;
        int maxstart=0;
        bool minfound=0,maxfound=0;
        long int res=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]<minK || nums[i]>maxK){
              start=i+1;
              minfound=0;
              maxfound=0;
          }
          if(nums[i]==minK) {
              minfound=1;
              minstart=i;
            }
            if(nums[i]==maxK) {
              maxfound=1;
              maxstart=i;
             }
            if(maxfound && minfound) res+=(min(minstart,maxstart)-start+1);
      }  
        return res;
    }
};