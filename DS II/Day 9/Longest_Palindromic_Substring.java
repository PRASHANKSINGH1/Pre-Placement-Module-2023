class Solution {
    private int lo, maxLen;
    public String longestPalindrome(String s) {
        int len = s.length();
        if (len < 2) {
            return s;
        }

        for (int i = 0; i < len - 1; i++) {
            extendPalindrome(s, i, i); //assume odd length, try to extend Palindrome as possible
            extendPalindrome(s, i, i + 1); //assume even length.
        }
        return s.substring(lo, lo + maxLen);
    }

    private void extendPalindrome(String s, int pointer1, int pointer2) {
        while (pointer1 >= 0 && pointer2 < s.length() && s.charAt(pointer1) == s.charAt(pointer2)) {
            pointer1--;
            pointer2++;
        }
        if (maxLen < pointer2 - pointer1 - 1) {
            lo = pointer1 + 1;
            maxLen = pointer2 - pointer1 - 1;
        }
    }
}