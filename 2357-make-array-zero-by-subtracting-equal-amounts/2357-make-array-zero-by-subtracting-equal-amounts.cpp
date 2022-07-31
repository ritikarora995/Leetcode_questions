class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                s.insert(nums[i]);
            }
        }
        if(s.size()==0){
            return 0;
        }
        return s.size();
    }
};