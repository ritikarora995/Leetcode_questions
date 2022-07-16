class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int>v;
        int idx1=lowerbound(nums,  target);
        int idx2=lowerbound( nums,  target+1)-1;
 if(idx1<nums.size() && nums[idx1]==target){
     return {idx1,idx2};
 }
      return {-1,-1};  
    }
};