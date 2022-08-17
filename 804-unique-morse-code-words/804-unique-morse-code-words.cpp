class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        unordered_map<string,int>umap;
        for(auto s:words)
        {
            string str;
           for(auto ch:s){
               str+=v[ch-'a'];
           } 
            umap[str]++;
        }
        
        return umap.size();
    }
};