class Solution {
public:
    int divide(int dividend, int divisor) {
 if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor== 1) return INT_MIN;
        long dv=abs(divisor);
        long  dd=abs(dividend);
        int ans=0;
          while(dv<=dd){
            long long count=1,sum=dv;
            while(dd-sum>=sum)
            {
            sum+=sum;
            count+=count;
            }
            ans+=count;
            dd-=sum;
          }
  
        if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)) return -ans;
        return ans;
    }
};