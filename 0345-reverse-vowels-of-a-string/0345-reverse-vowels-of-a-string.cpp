class Solution {
public:
    bool checkvowel(char ch){
        if(ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U' or ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') return 1;
        return 0;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
      while(i<j){
           if(checkvowel(s[i]) && checkvowel(s[j])){
               swap(s[i],s[j]);
               i++;
               j--;
           }
           if(!checkvowel(s[i])){
              i++;
          }
           if(!checkvowel(s[j])){
              j--;
          }
      }
        return s;
    }
};