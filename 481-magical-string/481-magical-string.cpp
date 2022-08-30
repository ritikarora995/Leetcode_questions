class Solution {
public:
    int magicalString(int n) {
        if(n==0) return 1;
        if(n==3) return 1;
        vector<int>s;
        // for(int i=0;i<)
        s.push_back(1);
        s.push_back(2);
        s.push_back(2);
        int idx=2;
        int digit=1;
        while(s.size()<n){
            if(s[idx]==1){
                s.push_back(digit);
            }
            else if(s[idx]==2){
                s.push_back(digit);
                s.push_back(digit);
            }
            if(digit==1) digit=2;
            else digit=1;
            idx++;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]==1) cnt++;
        }
        return cnt;
    }
};
// 1 11  22 1 2 11
