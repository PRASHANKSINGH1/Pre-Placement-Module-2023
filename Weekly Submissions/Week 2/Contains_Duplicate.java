class Solution {
    public boolean containsDuplicate(int[] nums) {
        for (int i = 1; i < nums.length; ++ i) {
            for (int j = 0; j < i; ++ j) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
} 