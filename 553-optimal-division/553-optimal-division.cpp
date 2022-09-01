class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string s;
        if(nums.size()==1) {
            s+=to_string(nums[0]);
            return s;
        }
        if(nums.size()==2){
            s+=to_string(nums[0]);
            s+='/';
            s+=to_string(nums[1]);
            return s;
        }
        for(int i=0;i<nums.size();i++){
            s+=to_string(nums[i]);
            if( i!=nums.size()-1) s+='/';
            if(i==0) s+='(';
            if(i==nums.size()-1) s+=')';
        }
        return s;
    }
};