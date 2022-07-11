class Solution {
public:
    // int *x ;
    bool place(int k, int i,vector<int>&x)
    {
    for (int j = 1; j <= k - 1; j++)
    {
        if ((x[j] == i) || abs(j - k) == abs(x[j] - i))
        {
            return false;
        }
    }
    return true;
}
void nqueen(int k, int n,vector<int>&x,vector<vector<string>>&v)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(k, i,x) == true)
        {
            x[k] = i;
            // cout<<i<<x[i]<<" "<<endl;
            if (k == n)
            {
                // cout<<"hello";
           vector<string> board(n,string(n,'.'));
            
                for(int j=1;j<=n;j++){
                board[j-1][x[j]-1]='Q';
                  // cout<<board[j-1][x[j]-1]<<endl;
                    // cout<<j<<" "<<x[j]<<endl;
                    }
                // for(int i=0;i<board.size();i++){
                //     cout<<board[i]<<" "<<endl;
                // }
                // return;
                // exit(1);
                
            v.push_back(board);
            }
            else
            {
                nqueen(k + 1, n,x,v);
            }
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
          vector<vector<string>>v;
          vector<int>x(n+1);
          nqueen(1, n,x,v);
        return v;
    }
};