class Solution {
    public int jump(int[] nums) {
        int n = nums.length;
        int l = 0;
        int r = 0;
        int result = 0;
        while (r < n - 1) {
            int maxJump = 0;
            // use window of l and r where max jump can be perform
            for (int i = l; i <= r; i++) {
                maxJump = Math.max(maxJump, i + nums[i]);
            }
            l = r + 1;
            r = maxJump;
            result ++;
        }
        
        return result;
    }
}