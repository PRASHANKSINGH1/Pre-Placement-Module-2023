class Solution {
    
    public List<List<Integer>> res = new ArrayList<>();

    public List<List<Integer>> permute(int[] nums) {
        dfs(nums, 0);
        return res;
    }

    public void dfs(int[] nums, int start) {
        if (start == nums.length) {
            List<Integer> arr = new ArrayList<>();
            for (int num: nums) arr.add(num);
            res.add(arr);
        }
        for (int i = start; i < nums.length; i++) {
            swap(nums, start, i);
            dfs(nums, start+1);
            swap(nums, start, i);
        }
    }

    public void swap(int[] nums, int i, int j) {
        if (i == j) return;
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}