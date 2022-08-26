class Solution {
public:
    // 2 3 2 
    int rob1(vector<int>&nums){
            if (nums.size() == 0) return 0;
    int prev1 = 0;
    int prev2 = 0;
    for (int num : nums) {
        int tmp = prev1;
        prev1 = max(prev2 + num, prev1);
        prev2 = tmp;
    }
    return prev1;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>dp1(nums.begin(),nums.end()-1);
        vector<int>dp2(nums.begin()+1,nums.end());
        return max(rob1(dp1),rob1(dp2));
    }
};