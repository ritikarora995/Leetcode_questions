class Solution {
public:
    int maxProfit(vector<int>& a) {
        int max1=a[a.size()-1];
        int b[a.size()];
        for(int i=a.size()-1;i>=0;i--){
            max1=max(max1,a[i]);
            b[i]=max1;
        }
        int profit=0;
        for(int i=0;i<a.size()-1;i++){
            profit=max(profit,b[i]-a[i]);
        }
        return profit;
    }
};