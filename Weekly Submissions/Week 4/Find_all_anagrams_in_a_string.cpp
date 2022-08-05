class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int ns = s.length(); 
        int np = p.length(); 
        List<Integer> result = new ArrayList<>(); 
        
        if (np > ns) {
            return result; 
        }
        
        int[] sCount = new int[26]; 
        int[] pCount = new int[26]; 
        
        for (int i = 0; i < np; i++) {
            pCount[p.charAt(i) - 'a']++;
        }
        int start = 0;
        for (int i = 0; i < ns; i++) {
            sCount[s.charAt(i) - 'a']++;
            
            if (i >= np) {
                sCount[s.charAt(i - np) - 'a']--; 
                start++; 
            }
            
            if (i >= np - 1 && Arrays.equals(sCount, pCount)) {  
                result.add(start); 
            }
        }
        
        return result; 
    }
}