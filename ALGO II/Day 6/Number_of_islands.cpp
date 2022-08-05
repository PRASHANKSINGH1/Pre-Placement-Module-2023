class Solution {
    public int numIslands(char[][] grid) {
        int numIslands = 0;
        
        for(int i = 0; i < grid.length; i++) {
            for(int j = 0; j < grid[i].length; j++) {
                if(grid[i][j] == '1') {
                    numIslands = numIslands + 1;
                    fillIsland(grid, i, j);
                }
            }
        }
        
        return numIslands;
    }
    
    public void fillIsland(char[][] grid, int row, int col) {
        
        if(grid[row][col] == '1') {
            grid[row][col] = '2';
            if(row >= 1)
                fillIsland(grid, row - 1, col);
            
            if(col >= 1)
                fillIsland(grid, row, col - 1);
            
            if(row + 1 < grid.length)
                fillIsland(grid, row + 1, col);
            
            if(col + 1 < grid[0].length)
                fillIsland(grid, row, col + 1);
                
        }
    }
}