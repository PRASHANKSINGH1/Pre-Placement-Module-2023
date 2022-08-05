class Solution {
    public boolean wordBreak(String s, List<String> word) {
        return WB(0,s,word,new Boolean[s.length()]);
    }
    public boolean WB(int index,String s,List<String> word,Boolean[] bol){
        if(index==s.length())
            return true;
        if(bol[index]!= null)
            return bol[index];
        for(int j=0;j<word.size();j++){
          
            if(index+word.get(j).length()<=s.length()&&s.substring(index,index+word.get(j).length()).equals(word.get(j))){
               if( WB(index+word.get(j).length(),s,word,bol))
                   return bol[index]=true;
            }
        }
        return bol[index]=false;
    }
}