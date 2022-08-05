class Solution {
    public void findCombinations(int index, int sum, int target, int[] candidates, List <List <Integer> > combinations, ArrayList <Integer> currentSubset){
        if(sum == target){
            combinations.add(new ArrayList (currentSubset));
            return;
        }
        for(int next = index; next < candidates.length; ++next){
            if(next > index && candidates[next] == candidates[next - 1]){
                continue;
            }
            if(sum + candidates[next] <= target){
                currentSubset.add(candidates[next]);
                findCombinations(next + 1, sum + candidates[next], target, candidates, combinations, currentSubset);
                currentSubset.remove(currentSubset.size() - 1);
            }
        }
    }
    
    public List <List <Integer> > combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List <List <Integer> > combinations = new ArrayList <>();
        ArrayList <Integer> currentSubset = new ArrayList <>();
        
        findCombinations(0, 0, target, candidates, combinations, currentSubset);
        
        return combinations;
    }
}