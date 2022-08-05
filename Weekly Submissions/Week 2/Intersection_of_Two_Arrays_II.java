class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int nums1len = nums1.length;
        int nums2len = nums2.length;
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        List<Integer> result = new ArrayList<>();
        
        for(int i=0,j=0; i < nums1len && j < nums2len;){
            if(nums1[i] == nums2[j]){
                result.add(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){ 
                i++;
            }
            else{
                j++;
            }
        }
        
        int[] arr = result.stream().mapToInt(Integer::intValue).toArray();
        
       return arr;
    }
}