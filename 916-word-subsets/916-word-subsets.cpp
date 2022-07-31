class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        vector<int>freq(26,0);
        
        for(char i='a';i<='z';i++)
        {
         for(int j=0;j<words2.size();j++)
         {
            int cnt=0;
          for(auto it: words2[j]){
                    if(it==i){
                        cnt++;
                    }
              }
         freq[i-'a']=max(freq[i-'a'],cnt);
                
            }
        }
        // for(int i=0;i<26;i++)
        // {
        //     cout<<freq[i]<<" ";
        // }
   
        for(int i=0;i<words1.size();i++){
                 vector<int>freq1(26,0);
         for(auto it:words1[i]){
             freq1[it-'a']++;
         }
            bool flag=true;
            for(char z=0;z<26;z++){
                if(freq1[z]<freq[z]){
                   flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(words1[i]);
            }
        }
        return ans;
    }
};