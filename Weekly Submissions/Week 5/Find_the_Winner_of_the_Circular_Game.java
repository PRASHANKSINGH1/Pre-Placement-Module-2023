class Solution {
    public int findTheWinner(int n, int k) {
        ArrayList<Integer> a1 =new ArrayList<Integer>();
        for(int i=1;i<=n;i++)
        {
            a1.add(i);
        }
        int []res={0};
        solve(a1,k-1,0,res);
        return res[0];
    }
    public void solve(ArrayList<Integer> a1,int k,int idx,int []res)
    {
        if(a1.size()==1)
        {
            res[0]=a1.get(0);
            return;
        }
        idx=(idx+k)%a1.size();
        a1.remove(idx);
        idx=(idx%a1.size());
        solve(a1,k,idx,res);        
    }
}