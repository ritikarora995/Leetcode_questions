class Solution {
public:
    int climbStairs(int n) 
    {
        int a=1,b=2;
        
        int c;
        if(n==a){
            return a;
        }
        if(n==b){
            return b;
        }
        
         for(int i=3;i<=n;i++){
            c=a+b; 
             a=b;
              b=c;    
         }
        return c;
    }
    
};