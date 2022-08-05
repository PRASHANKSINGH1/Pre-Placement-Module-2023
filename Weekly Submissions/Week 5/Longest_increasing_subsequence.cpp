class Solution {
    public int lengthOfLIS(int[] nums) {
        return getLIS(nums);
    }
    
    //O(n^2) solution
    public int lengthOfLISDp(int[] nums) {
        int len = nums.length;
        int[] dp = new int[len];
        for(int l = 0; l<len;l++) {
            dp[l] = 1;   
        }
        for(int l = 1; l<len;l++) {
            for(int j = 0; j< l; j++) {
                if(nums[j]<nums[l]){
                    dp[l] = Math.max(dp[l],dp[j]+1);
                }
            }
        }
        int max = -1;
        for(int i = 0; i< dp.length;i++)
        {
            if(max<dp[i])
                max = dp[i];
        }
        return max;
    }
    
    
    //nlogn solution
    public int getLIS(int nums[]) {
        
        int len = nums.length;
        int minEnd[] = new int[len];
        int minEndPos = 0, maxLen = 0;
        int parent[] = new int[len];
        
        
        for(int i = 0; i<len; i++) {
           parent[i] = -1; 
        }
        
        for(int i = 0; i<len; i++) {
           if(nums[i] <= nums[minEnd[0]]) {
               minEnd[0] = i;
               
           } else if(nums[minEnd[minEndPos]] < nums[i]) {
               minEndPos++;
               minEnd[minEndPos] = i;
               parent[i] = minEnd[minEndPos]-1;
           } else {
               int index = binaryFind(nums, minEnd, 0, minEndPos, nums[i]);
               minEnd[index] = i;
               parent[i] = minEnd[index-1];
               
           }
        }
        //System.out.println("LIS is: ");
        int pos = minEnd[minEndPos];
        /*while(pos != -1) {
            System.out.print(nums[pos]+" ");
            pos = parent[pos];
        }*/
        
        return minEndPos+1;
        
    }    
    
    public int binaryFind(int nums[], int[] minarr, int start , int end, int tgt) {
        
        if(start > end)
            return -1;
        int mid = (start+end)/2;
        
        if(nums[minarr[mid]] < tgt && nums[minarr[mid+1]] >= tgt) {
            return mid+1;
        }
        
        if(nums[minarr[mid]] < tgt) {
            return binaryFind(nums, minarr, mid+1, end, tgt);
        }
        
        return binaryFind(nums, minarr, start, mid-1, tgt);
        
    }
    
    
}