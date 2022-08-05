class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        
        int include=0;
        int exclude=0;
        
        include = nums[0];
        
        
        for(int i=1;i<n;i++){
            int newInc = exclude + nums[i];
            int newExc = Math.max(exclude, include);
            
           include= newInc;
           exclude= newExc;

        }
        int res = Math.max(include, exclude);
        return res;
        
        
    }
}