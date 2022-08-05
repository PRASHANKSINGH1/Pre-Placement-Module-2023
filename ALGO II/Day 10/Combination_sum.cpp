class Solution {
    public void findCombinations(int index, int sum, int target, int[] candidates, List <List <Integer> > combinations, ArrayList <Integer> currentSubset){
        if(index == candidates.length){
            if(sum == target){
                combinations.add(new ArrayList (currentSubset));
            }
            return;
        }
        if(sum + candidates[index] <= target){
            currentSubset.add(candidates[index]);
            findCombinations(index, sum + candidates[index], target, candidates, combinations, currentSubset);
            currentSubset.remove(currentSubset.size() - 1);
        }
        findCombinations(index + 1, sum, target, candidates, combinations, currentSubset);
    }
    
    public List <List <Integer> > combinationSum(int[] candidates, int target) {
        List <List <Integer> > combinations = new ArrayList <>();
        ArrayList <Integer> currentSubset = new ArrayList <>();
        
        findCombinations(0, 0, target, candidates, combinations, currentSubset);
        
        return combinations;
    }
}