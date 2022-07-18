class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            a[abs(a[i])-1]=-a[abs(a[i])-1];
            // cout<<a[i]<<" "<<a[a[i]-1]<<endl;
            if(a[abs(a[i])-1]>0)
                ans.push_back(abs(a[i]));
        }
         // for(int i=0;i<a.size();i++){

        return ans;
    }
};