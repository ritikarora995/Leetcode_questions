class Solution {
public:
    // int *x;
    int c=0;
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
void nqueen(int k, int n,vector<int>&x)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(k, i,x) == true)
        {
            x[k] = i;
            // cout<<i<<x[i]<<" "<<endl;
            if (k == n)
            {
                // cout << "heelo";
          c++;
                // return;
                // exit(1);
            }
            else
            {
                nqueen(k + 1, n,x);
            }
        }
    }
}
    int totalNQueens(int n) {
vector<int>x(n+1);
        nqueen(1, n,x);
        return c;

    }
};