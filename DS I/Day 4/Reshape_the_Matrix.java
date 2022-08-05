class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        if (mat.length * mat[0].length != r * c) return mat;

    int[][] retVal = new int[r][];
    for (int i = 0; i < r; i++) retVal[i] = new int[c];

    int row = 0;
    int col = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            retVal[i][j] = mat[row][col];
            col++;
            if (col == mat[0].length)
            {
                row++;
                col = 0;
            }
        }
    }

    return retVal;
    }
}