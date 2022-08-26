class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int curr=0;
        int maxx=0;
        sort(special.begin(),special.end());
        int currindx=0;
        int i=bottom;
        while(i>=bottom && i<=top){
            if(currindx<special.size() && i< special[currindx] )
            {
                curr+=(special[currindx]-i);
                maxx=max(maxx,curr);
                i+=(special[currindx]-i);
            }
          
            else if(currindx<special.size() && i==special[currindx])
            {
                  curr=0;
                 currindx++;
                i++;
            }
            
            else if(currindx==special.size()){
                 curr+=(top-special[currindx-1]);
                 maxx=max(maxx,curr);
                i+=(top-special[currindx-1]);
            }
            // cout<<curr<<maxx<<endl;
            // cout<<curr<<maxx<<endl;
        }
        
        return maxx;
    }
};