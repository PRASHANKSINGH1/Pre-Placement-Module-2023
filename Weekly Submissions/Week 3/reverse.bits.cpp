public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int reversed = 0;
        
        for (int i=0; i<32; i++) {
            reversed <<= 1; //shift left by 1 bit or multiply by 2 (ex: b101 -> b1010 or 5 -> 10)
            reversed |= (n & 1); // if n is now an odd then add 1 to the reversed number
            n >>= 1; // shift right by 1 bit or divide by 2 (ex: b1101 -> b110 or 13 -> 6)
        }
        
        return reversed;
    }
}