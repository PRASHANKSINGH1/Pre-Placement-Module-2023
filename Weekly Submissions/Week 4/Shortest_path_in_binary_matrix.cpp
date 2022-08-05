class Solution {
    public int shortestPathBinaryMatrix(int[][] grid) {
        int n=grid.length;
        if(n==1 && grid[0][0]==0)
            return 1;
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        Queue<int[]> q= new LinkedList<>();
        q.add(new int[]{0,0});
        grid[0][0]=1;
        int count=1;
        int dir[][]={{1,0},{-1,0},{0,1},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}};
        while(!q.isEmpty()){
            int size=q.size();
            count++;
            
            for(int i=0;i<size;i++){
                int[] curr=q.poll();
                for(int d[]: dir){
                    int x=curr[0]+d[0];
                    int y=curr[1]+d[1];
                    
                    if(x<0 || x>=n || y<0 || y>=n || grid[x][y]==1)
                        continue;
                    
                    if(x==n-1 && y==n-1)
                        return count;
                    
                    q.offer(new int[]{x,y});
                    grid[x][y]=1;
                }
            }
        }  
    return -1;
    }
}