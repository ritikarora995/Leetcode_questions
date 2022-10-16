class Solution {
public:
    string longestPrefix(string s) {
        long h1 = 0, h2 = 0, mul = 1, base = 26, mod = 1e9 + 7, len = s.length(), ans = 0;
        for(int i = 0; i < len-1; i++) {
            h1 = (h1*base + (s[i]-'a' + 1))%mod;
            h2 = (h2 + (s[len-i-1]-'a'+1) * mul)%mod;
            mul = mul*base%mod;
            if(h1 == h2) ans = i + 1;
        }
        return s.substr(0, ans);
    }
};