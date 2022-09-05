class Solution {
  
public:
     
    bool isdigit(char ch){
   return ch>='0' && ch<='9'  ;
    }
    int myAtoi(string s) {
      if(s.length()==0){
          return 0;
          }
        int i=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        bool isnegative=false;
        if(s[i]=='-'){
            isnegative=true;
        }
        if(s[i]=='-' || s[i]=='+'){
          i++;
        }
        int result=0;
        while(i<s.length() && isdigit(s[i])){
            int digit=s[i]-'0';
            
            if(result>INT_MAX/10 ||  result==INT_MAX/10 && digit>7){
                return isnegative? INT_MIN :INT_MAX; 
            }
            result=result*10+digit;
            i++;
        }
        return isnegative? -result:result;
    }
  
};