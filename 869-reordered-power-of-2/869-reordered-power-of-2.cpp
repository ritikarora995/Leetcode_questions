class Solution {
public:
    int counter(int n)
        {
        long res=0;
        for(int i=n;i>=1;i/=10)
        {
         res += pow(10, i% 10) ;   
        }
        return res;
       }
    bool reorderedPowerOf2(int n) {
     long c=counter(n);
        for(int i=0;i<32;i++){
            if(counter(1<<i)==c){
                return true;
            }
        }
        return false;
    }
    
};
