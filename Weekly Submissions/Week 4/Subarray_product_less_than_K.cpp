class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        //since all the elements inside given input are positive
        //      &&
        //the product of all elements in the subarray is STRICTLY less than K
        //so we have the folowwing corner case:
        if (k <= 1) {
            return 0; //no possible solution considering the above analysis
        }
        int res = 0;
        int product = 1;
        int left = 0; // set up a left bound, for future silding window
        for (int i = 0; i < nums.length; i++) {
            product *= nums[i];
            while (left <= i && product >= k) { //when the current silding window does NOT satisify less than k requirement
                product /= nums[left];
                left++;
            }
            res += i - left + 1; // right - left + 1 = the total combinations of contiguous subarrays in the interval of [left, right];
        }
        return res;
    }
}