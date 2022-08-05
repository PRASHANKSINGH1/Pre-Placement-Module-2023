class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int n : nums) {
            map.put(n, map.getOrDefault(n, 0) + 1);
        }
        permuteUnique(nums, res, new ArrayList<>(), map);
        return res;
    }
    private void permuteUnique(int[] nums, List<List<Integer>> res, List<Integer> temp, HashMap<Integer, Integer> map) {
        if(temp.size() == nums.length) {
            res.add(new ArrayList<>(temp));
            return;
        }
        for(Map.Entry<Integer, Integer> entry: map.entrySet()) {
            if(entry.getValue() > 0) {
                temp.add(entry.getKey());
                map.put(entry.getKey(), entry.getValue() - 1);
                permuteUnique(nums, res, temp, map);
                map.put(entry.getKey(), entry.getValue() + 1);
                temp.remove(temp.size() - 1);
            }
        }
    }
}