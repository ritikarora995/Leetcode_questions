class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int>umap;
        for(int i=0;i<magazine.size();i++){
            umap[magazine[i]]++;
        }
        bool flag;
        for(int i=0;i<ransomNote.size();i++)
        {
            if(umap[ransomNote[i]]>0){
                flag=1;
                umap[ransomNote[i]]--;
            }
            else{
                return 0;
            }
        }
        return flag;
    }
};