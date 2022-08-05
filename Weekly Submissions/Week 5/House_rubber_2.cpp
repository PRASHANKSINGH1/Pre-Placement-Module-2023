class Solution {
    public int rob(int[] nums) {
        if(nums.length ==1)return nums[0];
        ArrayList<Integer>list1 = new ArrayList<>();
        ArrayList<Integer>list2 = new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(i!=0){
                list1.add(nums[i]);
            }
            if(i!=nums.length-1){
                list2.add(nums[i]);
            }
        }
        return Math.max(helper(list1) , helper(list2));
    }
    public int helper(ArrayList<Integer>nums){
        
        int n = nums.size();
        int prev = nums.get(0);
        int prev2 = 0;
        for(int i =0;i<n;i++){
            int pick = nums.get(i);
            if(i>1) pick+=prev2;
            int dpick = 0+prev;
            int cur = Math.max(pick,dpick);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
}