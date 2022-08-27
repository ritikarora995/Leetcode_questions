class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<int>v(26);
        for(int i=0;i<sentence.length();i++){
         v[sentence[i]-'a']=1;
        }
        for(int i=0;i<26;i++){
         if(v[i]==1) continue;
         else return false;   
        }
        return true;
        
    }
};