bool sortbysecindec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
} 
class Solution {
public:

    int minSetSize(vector<int>& arr) {
       unordered_map<int,int>umap;
        for(int i=0;i<arr.size();i++){
            umap[arr[i]]++;
            }
        vector<pair<int,int>>v;
        for(auto it:umap){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),sortbysecindec);
        int elements=0;
        // for(int i=0;i<v.size();i++){
        // cout<<v[i].first<<" "<<v[i].second<<endl;;
        // }
        for(int i=0;i<v.size();i++){
           elements+= v[i].second;
            if(elements>=arr.size()/2) return i+1;
        }
        return 0;
    }
};