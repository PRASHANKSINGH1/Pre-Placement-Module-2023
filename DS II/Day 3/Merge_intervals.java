class Solution {
    public int[][] merge(int[][] intervals) {
       Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0])); // this is the way to sort the 2d array.
        List<int[]> list = new ArrayList<>();

        for(int[] interval:intervals){
            if(list.size() == 0){
                list.add(interval);
            }else{
                int[] previndex = list.get(list.size()-1);
                if(interval[0] <= previndex[1]){
                    previndex[1] = Math.max(interval[1],previndex[1]);
                }else{
                    list.add(interval);
                }
            }
        }
        return list.toArray(new int[list.size()][]);
    }
}