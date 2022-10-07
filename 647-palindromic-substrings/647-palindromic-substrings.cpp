class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
             count++;
            int curr=i;
//       if it is odd length
            int left=curr-1;
            int  right=curr+1;
             while(curr<n-1 && left>=0 && right<n && s[left]==s[right]){
                 count++;
                 left--;
                 right++;
             }
             curr=i;
//       if it is even length
                left=curr;
                right=curr+1;
              while(curr<n-1 && left>=0 && right<n && s[left]==s[right]){
                  count++;
                left--;
                  right++;
              } 
            // cout<<count<<endl;
        }
        return count;
    }
};