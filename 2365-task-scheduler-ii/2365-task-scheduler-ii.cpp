class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<int,long long>umap;
        long long ans=0;
        for(int i=0;i<tasks.size();i++){
                ans++;
                if(umap.count(tasks[i]) && (ans-umap[tasks[i]])<=space)
                 {
                    ans+=space-(ans-umap[tasks[i]])+1;
                }
           umap[tasks[i]]=ans;
        }
        return ans;
    }
};