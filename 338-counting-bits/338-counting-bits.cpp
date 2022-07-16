class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            int x=i;
            int c=0;
            while(x!=0){
                if(x&1==1) c++;
                x=x/2;
            }
            v.push_back(c);
        }
        return v;
    }
};