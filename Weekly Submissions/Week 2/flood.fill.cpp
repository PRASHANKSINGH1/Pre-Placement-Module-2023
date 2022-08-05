class Solution {
public int[][] floodFillUtil(int screen[][], int x, int y, int prevC, int newC)
{
     int M=screen.length;
     int N=screen[0].length;
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
       return screen;
    if (screen[x][y] != prevC)
        return screen;
 
    // Replace the color at (x, y)
    screen[x][y] = newC;
 
    // Recur for north, east, south and west
    floodFillUtil(screen, x+1, y, prevC, newC);
    floodFillUtil(screen, x-1, y, prevC, newC);
    floodFillUtil(screen, x, y+1, prevC, newC);
    floodFillUtil(screen, x, y-1, prevC, newC);
    
    return screen;
}
    public int[][] floodFill(int screen[][], int x, int y, int newC)
{
    int prevC = screen[x][y];
      if(prevC==newC) 
          return screen;
    floodFillUtil(screen, x, y, prevC, newC);
    return screen;
        
}
    
    }