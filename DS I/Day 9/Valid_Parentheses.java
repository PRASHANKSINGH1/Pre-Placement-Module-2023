class Solution {
    public boolean isValid(String s) {
      Deque<Character> deq = new ArrayDeque<>();
        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == '(')
                deq.push(')');
            if(s.charAt(i) == '[')
                deq.push(']');
            if(s.charAt(i) == '{')
                deq.push('}');
            if(s.charAt(i) == '}' || s.charAt(i) == ']' || s.charAt(i) == ')') {
                if(deq.peek() != null && deq.peek() != s.charAt(i)) {
                    return false;
                }
                else
                    if(deq.isEmpty())
                        return false;
                    deq.pop();
            }
        }
        return deq.isEmpty(); 
    }
}