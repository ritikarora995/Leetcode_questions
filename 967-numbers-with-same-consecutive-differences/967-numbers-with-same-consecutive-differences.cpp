class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>curr;
        for(int i=1;i<=9;i++) curr.push_back(i);
        for(int i=2;i<=n;i++){
            vector<int>curr2;
            for(int x:curr){
                int y=x%10;
                if(y+k<10){
                    curr2.push_back(x*10+y+k);
                }
                 if(k>0 && y-k>=0){
                    curr2.push_back(x*10+y-k);
                }
            }
            curr=curr2;
        }
        return curr;
    }
};