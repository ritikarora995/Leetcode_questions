class Solution {
public:
    
  
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>power;
        long long mod=1e9+7;
     for(int i=0;i<=29;i++){
         if(n&(1<<i)){
             
             power.push_back(1<<i);
         }
     }
        // for(int i=0;i<power.size();i++){
        //     cout<<power[i]<<" ";
        // }
          vector<int>result;
        for(int i=0;i<queries.size();i++){
            int ans=1;
         for(int j=queries[i][0];j<=queries[i][1];j++){
             ans=((ans%mod)*power[j])%mod;
         }
          result.push_back(ans); 
        }
        return result;
    }
};