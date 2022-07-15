class Solution {
public:
    bool binaryseatch(int row,int start,int end,vector<vector<int>>& a,int target){
       
        while(start<=end){
        int mid=(start+end)/2;
            if(a[row][mid]==target) return true;
            else if(a[row][mid]<target) start=mid+1;
            else if(a[row][mid]>target) end=mid-1;
        }
        return false;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // 1 3 5  7
            // bool flag=false;
        int m=matrix[0].size();
        int n=matrix.size();
            for(int i=0;i<n;i++){
                if(binaryseatch(i,0,m-1,matrix,target)) return true;
            }
return false;
    }
};