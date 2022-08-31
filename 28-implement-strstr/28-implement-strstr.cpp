class Solution {
public:
    int strStr(string s, string x) {
        for(int i=0;i<s.length();i++){
        int j;
        for( j=0;j<x.length();j++){
            if(s[i+j]!=x[j]) break;
        }
        if(j==x.length()) return i;
        // else if(j==0) i=i+1;
        // else i=i+j;
    }
    return -1;
    }
};