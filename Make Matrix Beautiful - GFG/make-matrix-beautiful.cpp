// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > a, int n)
    {
        int max1=INT_MIN;
        int max2=INT_MIN;
        int max3=INT_MIN;
         for(int i=0;i<n;i++){
             int d=0;
             for(int j=0;j<n;j++){
                 d+=a[i][j];
             }
            max1=max(max1,d);
         }
          for(int j=0;j<n;j++){
            int d=0;
            for(int i=0;i<n;i++){
                 d+=a[i][j];
             }
            max2=max(max2,d);
         }
         max3=max(max1,max2);
         for(int i=0;i<n;i++){
             int d=0;
             for(int j=0;j<n;j++){
                 d+=a[i][j];
             }
             a[i][n-1]=d;
            // max1=max(max1,d);
         }
         int c=0;
         for(int i=0;i<n;i++){
             c+=(max3-a[i][n-1]);
         }
         return c;
         
        // code here 
    } 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends