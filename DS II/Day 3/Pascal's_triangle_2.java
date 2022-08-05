class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> res=new ArrayList<>();
        long val=1;
        for(int i=0;i<=rowIndex;i++){
            res.add((int)val);
            val=val*(rowIndex-i)/(i+1);
        }
        return res;
    }
}