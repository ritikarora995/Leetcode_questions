class Solution {
public:
    // 1 2 4
    //     1 1 3
    //     1 0 2
    //     0 1 2
    //     0 0 1
    int fillCups(vector<int>& a) {
       sort(a.begin(),a.end());
        int c=0;
      while(a[2]!=0){
          
         
          if(a[1]>0){
              a[2]--;
              a[1]--;
              c++;
          }
          else{
              a[2]--;
              c++;
          }
     sort(a.begin(),a.end());
      }
        return c;
    }
};
