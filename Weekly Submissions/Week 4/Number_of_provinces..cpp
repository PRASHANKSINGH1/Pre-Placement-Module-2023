class Solution {
  public void dfs(int[][] isConnected, int n, boolean[] visited)
    {
    visited[n]= true;
         for(int j=0; j<isConnected.length; j++){
            if(isConnected[n][j]==1 && !visited[j]){
             dfs(isConnected, j, visited);        
            }
         }
    }
    
    public int findCircleNum(int[][] isConnected) {
        boolean[] visited= new boolean[isConnected.length];
        Arrays.fill(visited, false);
        int res=0;
        
        for(int i=0; i<isConnected.length; i++){
           if(!visited[i]){
               dfs(isConnected, i, visited);
               res++;
           }
            
        }
        
        return res;
    }
}