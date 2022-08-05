class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        Arrays.sort(intervals, new Comparator<>() {
            public int compare(int[] a, int[] b) {
                if(a[0] != b[0])    
                    return a[0]-b[0];
                else 
                    return a[1] - b[1];
                    
            }
        });
        
        int[] prev = intervals[0];

        int count = 0;
        for(int i=1; i<intervals.length; i++) {
            int[] curr = intervals[i];
            
            if(prev[1] > curr[0]) {
                count++;
                if(prev[1] > curr[1]) {
                    prev = curr;
                } 
            } else {
                prev = curr;
            }
        }
        return count;
    }
}