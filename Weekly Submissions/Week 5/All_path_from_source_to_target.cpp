class Solution {
    List<List<Integer>> result = new ArrayList<>();
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
     
        List<Integer> path = new ArrayList<>();
					
        path.add(0);
        dfs(graph, 0,path);
					
        return result;
    }

    private void dfs(int[][] graph, int curr, List<Integer> path) {
        if (curr == graph.length - 1) {
            result.add(new ArrayList<Integer>(path));
            return;
        }

        for (int next : graph[curr]) {
            path.add(next);
            dfs(graph, next,path);
            path.remove(path.size() - 1);
        }
    }
}