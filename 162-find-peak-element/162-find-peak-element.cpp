class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n=a.size();
//         int low=1;
        
//         int high=n-2;
//         // if(a[0]>INT_MIN && a[])
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(a[mid]>a[i+1] && a[i-1]<a[mid] ) 
//               return mid;
//              }
   long long int max1=INT_MIN;
        int c=0;
        for (int i=0;i<n;i++){
        if(max1<a[i]){
            max1=a[i];
            c=i;
        }
        }
        return c;
    }
};
// 1 2 
// 1
// 1 2 3    