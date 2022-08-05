class Solution {
    public void solve(char[][] board) {
        for(int row = 0; row < board.length; row++) {
            for(int col = 0; col < board[0].length; col++) {
                // only consider those 'O's who are the the edge of the board, because only 'O's
                // that are somehow connected to another 'O' that is at the edge of the board,
                // can be saved from being flipped
                if(board[row][col] == 'O' &&
                   (row == 0 || col == 0 || row == board.length - 1 || col == board[0].length - 1)) {
                       board = markAdjecentCells(board, row, col);
               }
            }
        }
        
        // all the temporary 'o' are save, everything else gets flipped
        for(int row = 0; row < board.length; row++) {
            for(int col = 0; col < board[0].length; col++) {
                if(board[row][col] == 'o') board[row][col] = 'O';
                else board[row][col] = 'X';
            }
        }
    }
    
    private char[][] markAdjecentCells(char[][] board, int row, int col) {
        // out of bounds
        if(row < 0 || col < 0 || row >= board.length || col >= board[0].length || board[row][col] != 'O') {
            return board;
        } else {
            board[row][col] = 'o'; // temporary mark
            board = markAdjecentCells(board, row + 1, col);
            board = markAdjecentCells(board, row - 1, col);
            board = markAdjecentCells(board, row, col + 1);
            board = markAdjecentCells(board, row, col - 1);
            return board;
        }
    }
}