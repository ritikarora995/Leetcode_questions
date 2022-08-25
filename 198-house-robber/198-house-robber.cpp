class Solution {
public:
    
    int rob(vector<int>&nums, int i,vector<int>&memo) {
    if (i < 0) {
        return 0;
    }
    if (memo[i] >= 0) {
        return memo[i];
    }
    int result = max(rob(nums, i - 2,memo) + nums[i], rob(nums, i - 1,memo));
    memo[i] = result;
    return result;
}

    int rob(vector<int>& nums) {
        vector<int>memo(nums.size()+1,-1);
       return rob(nums,nums.size()-1,memo);
    }
};