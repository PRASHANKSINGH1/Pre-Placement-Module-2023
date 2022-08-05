class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        Map<Character, Integer> map = new HashMap<>();
        
        for(Character c: ransomNote.toCharArray())
            map.put(c, map.getOrDefault(c, 0) + 1);
        
        for(Character c: magazine.toCharArray()){
            if(map.containsKey(c)){
                map.put(c, map.get(c) - 1);
                
                if(map.get(c) == 0)
                    map.remove(c);
                
            }
        }
        
        return map.isEmpty();
    }
}