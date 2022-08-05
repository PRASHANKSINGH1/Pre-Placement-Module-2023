class Solution {
    public int[][] intervalIntersection(int[][] firstList, int[][] secondList) {
        int p1 = 0, p2 = 0;
        List<int[]> res = new ArrayList<>();
        while(p1 < firstList.length && p2 < secondList.length){
            int[] interval1 = firstList[p1];
            int[] interval2 = secondList[p2];
            int low = Math.max(interval1[0], interval2[0]);
            int up = Math.min(interval1[1], interval2[1]);
            if(up >= low){
                res.add(new int[]{low, up});
            }
            if(interval1[1] > interval2[1]){
                p2++;
            } else {
                p1++;
            }
        }
        return res.toArray(new int[res.size()][]);
    }
}s