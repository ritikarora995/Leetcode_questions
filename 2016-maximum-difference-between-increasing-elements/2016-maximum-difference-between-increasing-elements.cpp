class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();

         vector<int>maxa(n);
          int maxx=-1;
        maxa[n-1]=-1;
         for(int i=n-2;i>=0;i--){
              maxx=max(nums[i+1],maxx);
              maxa[i]=maxx;
             // cout<<maxa[i];
        }
        // cout<<endl;
        int maxx1=INT_MIN;
        for(int i=0;i<n-1;i++)
        { 
            maxx1=max(maxx1,maxa[i]-nums[i]);
            // cout<<maxx1<<" ";
        }
        if(maxx1<=0) return -1;
        return maxx1;
       }
};