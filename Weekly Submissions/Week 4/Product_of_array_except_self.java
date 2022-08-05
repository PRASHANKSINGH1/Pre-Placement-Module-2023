class Solution {
    public int[] productExceptSelf(int[] nums) 
    {
        int prod=1;
        int[] right=new int[nums.length];
        for(int i = nums.length-1;i >= 0;i--){
            prod = prod*nums[i];
            right[i] = prod;
        }
        prod = 1;
        int[] res = new int[nums.length];
		
        for(int j = 0; j < nums.length-1; j++){
            int rightp = right[j+1];
            int ans = prod*rightp;
            res[j] = ans;
            prod = prod*nums[j];
        }
		
        res[nums.length-1] = prod;
        return res;
}
}