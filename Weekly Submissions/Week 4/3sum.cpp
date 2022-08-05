class Solution {
    public List<List<Integer>> threeSum(int[] a) {
        Set<List<Integer>> triplets = new HashSet<>();
        Set<Integer> set = new HashSet<>();

        for(int i=0;i<a.length;i++){
            for(int j=i+1;j<a.length;j++) {
                if(set.contains(-(a[i]+a[j]))) {
                    List<Integer> triplet = Arrays.asList(a[i],a[j],-(a[i]+a[j]));
                    Collections.sort(triplet);
                    triplets.add(triplet);
                }
            }
            set.add(a[i]);
        }
        
        return new ArrayList<>(triplets);
    }
}