class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1
;
        // 1 2 3 4 5 6
        // 2 3 4 5 6 1
        // 3 4 5 6 1 2
        // 4 5 6 1 2 3
        // 5 6 1 2 3 4
        // 6 1 2 3 4 5
    while(low<high){
        if(nums[low]<nums[high]){
            return nums[low];
        }
        int mid =(low+high)/2;
        if(nums[high]<nums[mid]){
            low=mid+1;
        }
        else {
            high=mid;
        }
    }
        return nums[low];
    }
};