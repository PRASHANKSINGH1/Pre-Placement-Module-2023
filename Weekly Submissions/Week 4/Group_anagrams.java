class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans=new ArrayList<>();
        if(strs.length==0)
            return ans;
        HashMap<String,List<String>> map=new HashMap<>();
        for(int i=0;i<strs.length;i++)
        {
            int[] count=new int[26];
            char[] ch=strs[i].toCharArray();
            for(int j=0;j<ch.length;j++)
            {
                count[ch[j]-'a']++;
            }
            String s=Arrays.toString(count);
            if(map.containsKey(s))
            {
                List<String> st = map.get(s);
                st.add(strs[i]);
                map.put(s,st);
            }
            else
            {

                List<String> st = new ArrayList<String>();
                st.add(strs[i]);
                map.put(s,st);
            }
        }
        ans.addAll(map.values());
        return ans;
    }
}