class Solution {
    public int longestPalindrome(String s) {
        int arr[] = new int[128];int ans =0;
        for(int i=0;i<s.length();i++)
            arr[s.charAt(i)]++;
        for(int i:arr)
            ans = ans + i/2*2; 
        return (ans == s.length()) ? ans : ans+1;    
    }
}