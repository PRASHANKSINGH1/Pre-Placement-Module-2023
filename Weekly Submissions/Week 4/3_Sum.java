class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        int first = 0;
        
        while (first <= nums.length - 3) {
            if (first >= 1) {
                if (nums[first] == nums[first - 1]) {
                    first += 1;
                    continue;
                }
            }

            // The following is two sum with no duplicate
            int targetSum = -nums[first];
            int left = first+1, right = nums.length-1;
            int lastLeft = -1, lastRight = -1;
            while (left < right) {
                if (lastLeft != -1 && lastRight != -1 && 
                    nums[left] == nums[lastLeft] && nums[right] == nums[lastRight]) {
                    left += 1;
                    right -= 1;
                    continue;
                }

                int sum = nums[left] + nums[right];
                if (sum == targetSum) {
                    result.add(Arrays.asList(nums[first], nums[left], nums[right]));
                    lastLeft = left;
                    lastRight = right;
                    left += 1;
                    right -= 1;
                } else if (sum < targetSum) {
                    lastLeft = left;
                    left += 1;
                } else {
                    lastRight = right;
                    right -= 1;
                }
            }

            first += 1;
        }

        return result;
    }
}