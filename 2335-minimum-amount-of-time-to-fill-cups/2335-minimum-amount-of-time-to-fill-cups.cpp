class Solution {
public:
    int fillCups(vector<int>& a) {
        priority_queue<int>pq;
        for(int i=0;i<a.size();i++){
            pq.push(a[i]);
        }
        int c=0;
      while(pq.top()!=0 && pq.size()>1){
         int a=pq.top()-1;
          pq.pop();
          int b=pq.top()-1;
          pq.pop();
          c++;
          if(a>0) pq.push(a);
          if(b>0) pq.push(b);

      }
        if(pq.size()) c+=pq.top();
        return c;
    }
};

    
    
    