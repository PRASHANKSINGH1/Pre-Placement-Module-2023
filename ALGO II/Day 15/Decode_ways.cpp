class Solution {
    public int numDecodings(String s) {
        int[] dp = new int[s.length()];
        dp[0] = s.charAt(0) != '0' ? 1 : 0;
        if (dp[0] == 0) {
            return 0;
        }
        for (int n = 1; n < s.length(); n++) {
            int f = Integer.valueOf(s.substring(n, n + 1));
            int c = Integer.valueOf(s.substring(n - 1, n + 1));
            if (f != 0) {
                dp[n] += dp[n - 1];
            }
            if (c >= 10 && c <= 26){
                dp[n] += n >= 2 ? dp[n-2] : 1;
            }
        }
        return dp[s.length()-1];
    }
}