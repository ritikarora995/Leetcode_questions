class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        vector<int>v;
        // 1 1 5 1 1 2 5 2 7 7
        int n=a.size();
        int cand1=-1;
        int cand2=-1;        
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==cand1) cnt1++;
            else if(a[i]==cand2) cnt2++;
            else if (cnt1==0){
                cand1=a[i];
                cnt1++;
            }
            else if(cnt2==0){
                 cand2=a[i];
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(cand1==a[i]){
                cnt1++;
            }
            else if(cand2==a[i]){
                cnt2++;
            }
        }
        if(cnt1>floor(n/3)) v.push_back(cand1);
        if(cnt2>floor(n/3)) v.push_back(cand2);
        return v;
    }
};