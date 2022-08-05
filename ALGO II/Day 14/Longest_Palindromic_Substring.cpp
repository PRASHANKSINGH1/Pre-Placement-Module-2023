class Solution {
    public String longestPalindrome(String s) { 
        String ret = "";
        for (int i = 0; i < s.length(); i++) {
            String s1 = palindrome(s, i, i);
            String s2 = palindrome(s, i, i + 1);
            ret = ret.length() > s1.length()?ret:s1;
            ret = ret.length() > s2.length()?ret:s2;
        }
        return ret;
        
    }
    
    private String palindrome(String s, int left, int right) {
        char[] chs = s.toCharArray();
        while (left >= 0 && right < chs.length) {
            if (chs[left] != chs[right]) {
                break;
            }
            left--;
            right++;
        }
        return s.substring(left + 1, right);
        
    }
}