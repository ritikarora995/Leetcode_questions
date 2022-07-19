class Solution {
public:
    int maxProduct(vector<string>& words) {
            int n=size(words);
        vector<int>mask(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
             mask[i] |= 1<<(words[i][j]-'a');
        }}
        int ans1=0;
             for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
                if(!(mask[i] & mask[j])){
                  ans1=max(int(words[i].length())*int(words[j].length()),ans1);
                }
              }
             }
        return ans1;
    }
};