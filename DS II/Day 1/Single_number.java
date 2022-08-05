class Solution {
    public int singleNumber(int[] nums) {
        int i=1,ans=nums[0];
while(i<nums.length) {
ans^=nums[i];
i++;
}
return ans;

    }
}