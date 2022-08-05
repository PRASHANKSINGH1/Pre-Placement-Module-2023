class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = matrix.length;
        int col = matrix[0].length;
        
        int[][] dp = new int[row+1][col+1];
        
        for(int i[] : dp) {
            Arrays.fill(i, -1);
        }
        
        return f(row-1, col-1, matrix, target, dp);
    }
    
    boolean f(int i, int j, int[][] m, int target, int[][] dp) {
        if(i == 0 && j == 0) return m[i][j] == target ? true: false;
        
        if(i < 0 || j < 0) return false;
        
        if(m[i][j] == target) return true;
        
        if(dp[i][j] != -1) return dp[i][j] == 1 ? true : false;
        
        boolean left = f(i, j-1, m, target, dp);
        boolean up = false;
        if(!left)
            up = f(i-1, j, m, target, dp);
        
        dp[i][j] = up || left ? 1 : 0;
        
        return left || up;
    }
}