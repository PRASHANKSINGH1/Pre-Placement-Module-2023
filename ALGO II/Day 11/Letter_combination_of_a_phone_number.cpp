class Solution {
    public List<String> letterCombinations(String digits) {
    // we can use backtracking in this 
    String [] set= new String [10];
    set[2]="abc";
    set[3]="def";
    set[4]="ghi";
    set[5]="jkl";
    set[6]="mno";
    set[7]="pqrs";
    set[8]="tuv";
    set[9]="wxyz";
    List<String> ans = new ArrayList<>();        
    if(digits==null || digits.length()==0) return ans;
    helper(ans,set,digits,0,"");
    return ans;
}
private void helper(List<String> ans , String [] set, String digits, int start , String currentString){
    if(digits.length()==start){
        ans.add(currentString);
        return ;
    }
   String possibleChar = set[digits.charAt(start)-'0'];
    for(char c:possibleChar.toCharArray()){
    helper(ans,set,digits,start+1,currentString+c);
    }
}
}