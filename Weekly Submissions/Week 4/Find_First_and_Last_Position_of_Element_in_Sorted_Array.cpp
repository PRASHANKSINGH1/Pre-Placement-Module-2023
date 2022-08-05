class Solution {
    int search(int[] nums, int target ,boolean findFirstIndex){
        int ans=-1, start=0, last=nums.length-1, mid;
        while(start<=last)
        {
            mid=start+(last-start)/2;
            if(target>nums[mid])
                start=mid+1;
            else if(target<nums[mid])
                last=mid-1;
            else
            {
                ans=mid;
                if(findFirstIndex)
                    last=mid-1;
                else    
                    start=mid+1;
            }
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};
        ans[0]=search(nums,target,true);
        if(ans[0]!=-1)
            ans[1]=search(nums,target,false);
        return ans;
    }
}