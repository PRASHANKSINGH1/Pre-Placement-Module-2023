class Solution {
    public boolean canJump(int[] arr) {
        int r = 0 + arr[0];
        int curr = 0;
        while (curr <= r) {
            if (arr[curr] + curr >= arr.length - 1) return true;
            r = Math.max(r, arr[curr] + curr);
            curr++;
        }
        return false;
    }
}