class Solution
{
public:
    int mySqrt(int x) {
    int low=0;
     int high=x;
        int ans;
        while(low<=high){
           long long int mid=(low+high)/2;
            // cout<<mid<<endl;
            if(mid*mid==x) return mid;
            else if(mid*mid>x){
                 high=mid-1;
             }   
            else if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
        
    }
};