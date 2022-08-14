class Solution {
public:
    bool noofpossibleways(vector<int>&nums,int mid,int days){
       int sum=0;
        int d=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid) {
                d++;
                sum=nums[i];
            }
        }
        return d<=days;
    }
    int binarysearch(vector<int>&nums,int days){

        int ans=0;
        int low=INT_MIN;
        int total=0;
       
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            low=max(low,nums[i]);
            
        }
         // cout<<low;
        if(days==nums.size()) return low;
          int high=total;
          while(low<=high){
            int mid=(low+high)/2;
              cout<<low<<" "<<high<<endl;
            if(noofpossibleways(nums,mid,days)==true){
                 ans=mid;
                 high=mid-1;
               
            }
              else{
                  low=mid+1;
                  
              }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& nums, int days) {
      return binarysearch(nums,days);
    }
};
