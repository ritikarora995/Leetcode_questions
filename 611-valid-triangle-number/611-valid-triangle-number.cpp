class Solution {
public:
    int triangleNumber(vector<int>& a) {
        int count=0;
        sort(a.begin(),a.end());
     for(int i=a.size()-1;i>=2;i--){
         int l=0;
         int r=i-1;
         while(l<r){
             if(a[l]+a[r]>a[i]){
                 count+=(r-l);
                 r--;
             }
             else{
                 l++;
             }
         }
     } 
        return count;
    }
};