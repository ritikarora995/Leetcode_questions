// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& A, vector<vector<int>>&B) {
        // Code here
        vector<vector<int> > ans(A.size(),vector<int>(B[0].size(),0));
    if(A[0].size()==B.size()){
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B[0].size();j++){
                for(int k=0;k<A[0].size();k++){
                    
                ans[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        A=ans;
    }
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends