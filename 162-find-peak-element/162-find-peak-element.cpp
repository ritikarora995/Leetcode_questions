class Solution {
public:
    int findPeakElement(vector<int>& a) {
          int n=a.size();
        if(n==1){
            return 0;
        }
        for(int i=0;i<n;i++){
            if(i==0 ) {
                if(a[i]>a[i+1] && a[i]>INT_MIN){
                    return i;
                }
            }
            else if(i==n-1 ) {
                if(a[i]>a[i-1] && a[i]>INT_MIN){
                    return i;
                }
            }
            
            else if(a[i]>a[i-1] && a[i]>a[i+1]){
                return i;
            }
                
            }
        
        return -1;
    }
};