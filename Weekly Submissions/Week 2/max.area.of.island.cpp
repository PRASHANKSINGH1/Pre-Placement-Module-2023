class Solution {
    
    public int getArea(int[][] grid, int i, int j) 
{
if(i < 0 || i >= grid.length || j < 0 || j >= grid[0].length || grid[i][j] == 0)
        return 0;

    grid[i][j] = 0;

    return 1 +  getArea(grid, i+1, j) + getArea(grid, i-1, j)                                     + getArea(grid, i, j+1) + getArea(grid, i, j-1);
}

    
    public int maxAreaOfIsland(int[][] grid) {
        
    int maxArea = 0;
    int n = grid.length;
    if(n == 0)
        return maxArea;
    int m = grid[0].length;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1) {
                maxArea = Math.max(getArea(grid, i, j), maxArea);
            }
        }
    }

    return maxArea;
}