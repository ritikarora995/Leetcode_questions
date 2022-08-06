class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
     set<int>s1;
        set<int>s2;
        vector<int>v;
        for(int i=0;i<a.size();i++){
            s1.insert(a[i]);
        }
         for(int i=0;i<b.size();i++)
         {
            s2.insert(b[i]);
        }
        for(auto it:s1){
            if(s2.count(it)==1){
                v.push_back(it);
            }
        }
        return v;
    }
};