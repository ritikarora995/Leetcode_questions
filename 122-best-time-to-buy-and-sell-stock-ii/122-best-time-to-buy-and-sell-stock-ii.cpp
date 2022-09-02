class Solution {
public:
    // 7 1 5 3 6 4
    int maxProfit(vector<int>& prices) {
        int i=0;
        int sell=0;
        int buy=0;
        int N=prices.size()-1;
        int profit=0;
        while(i<N){
            while(i<N && prices[i+1]<=prices[i] ) i++;
            buy=prices[i];
            while(i<N && prices[i]<prices[i+1])i++;
            sell=prices[i];
            profit+=sell-buy;
        }
        return profit;
    }
};