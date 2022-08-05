class Solution {
    public boolean wordPattern(String pattern, String s) {
        if(s=="" || pattern=="")
            return false;
        
        String[] words = s.split(" ");
        if (words.length!=pattern.length()) {
            return false;
        }
        
        HashMap<Character,String> map=new HashMap<>();
        for(int i=0;i<pattern.length();i++) {
            char ch=pattern.charAt(i);
            if(!map.containsKey(ch)) {
                if(map.containsValue(words[i]))
                    return false;
                
                map.put(ch,words[i]);
            }
            else if (!map.get(ch).equals(words[i])) {
                return false;
            }
        }
        return true;
    }
}