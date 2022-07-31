class Solution {
public:
    int maximumGroups(vector<int>& g) {
        sort(g.begin(),g.end());
        int x=1;
      while(x*(x+1)/2<=g.size()){
          x++;
      }
        x--;
        return x;
    }
};