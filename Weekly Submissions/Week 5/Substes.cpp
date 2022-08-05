class Solution {
    List<List<Integer>> result;
    public List<List<Integer>> subsets(int[] nums) {
        if(nums == null || nums.length == 0)
            return result;
        
        result = new ArrayList<>();
        
        helper(nums, 0, new ArrayList<>());
        return result;
        
    }
    
    private void helper(int[] nums, int index, List<Integer> path){
        //base 
        if(nums.length == index){
            result.add(new ArrayList<>(path));
            return;
        }
        
        
        //logic
        
        //choose
        path.add(nums[index]);
        helper(nums, index+1, path);
        path.remove(path.size()-1);
        
        //don't choose
        
        helper(nums, index+1, path);
        
    }
    
}