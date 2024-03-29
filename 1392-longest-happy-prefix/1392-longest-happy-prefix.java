class Solution {
   public String longestPrefix(String s) {
        long l = 0, r = 0, p = 1, mod = (long)1e9 + 7;
        int k = 0, n = s.length();
        for (int i = 0; i < n - 1; i++) {
            l = (l * 26 + s.charAt(i)) % mod;
            r = (r + p * s.charAt(n - i - 1)) % mod;
            if (l == r) k = i + 1;
            p = p * 26 % mod;
        }
        return s.substring(0, k);
    }

}