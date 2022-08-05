class Solution {
        public int maxArea(int[] height) {
         int ans=0;
         int min=0;
        
         for(int i= 0;i<height.length;i++){
             for(int j=i+1;j<height.length;j++){
                 min = Math.min(height[i],height[j]);
                 ans=Math.max(ans,min*(j-i));
             }
         }
         return ans;
    
    }
}