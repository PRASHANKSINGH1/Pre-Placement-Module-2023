class Solution {
    private void getAllParantheses(List<String> allParantheses, int openCount, int closeCount, int n, StringBuilder currString)
    {
        if (openCount > n || closeCount > n) return;
        
        if (openCount == n && closeCount == n)
        {
            allParantheses.add(new String(currString.toString()));
            return;
        }
        
        if (openCount <= n)
        {
            currString.append('(');
            getAllParantheses(allParantheses, openCount+1, closeCount, n, currString);
            currString.deleteCharAt(currString.length()-1);
        }
        
        if (openCount-closeCount >= 1 && closeCount < n)
        {
            currString.append(')');
            getAllParantheses(allParantheses, openCount, closeCount+1, n, currString);
            currString.deleteCharAt(currString.length()-1);
        }
    }
    public List<String> generateParenthesis(int n) 
    {
        List<String> allParantheses = new ArrayList<>();
        getAllParantheses(allParantheses, 0, 0, n, new StringBuilder());
        return allParantheses;
    }
}