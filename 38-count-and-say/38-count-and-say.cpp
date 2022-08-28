class Solution {
public:
    string countAndSay(int n) {
    if(n==1)return "1";
        if(n==2) return "11";
       string s="11";
          for(int i=3;i<=n;i++){
            string ans="";
            int c=1;
            // char c1=s[0];
              s=s+'&';
            for(int j=1;j<s.length();j++){
             // if()
           if(s[j]==s[j-1]){
               c++;
           }
            else{
                ans+=to_string(c);
                ans+=s[j-1];
                // c1=s[i];
               c=1;
             }
            }
            s=ans;
        }
        return s;
    }
};