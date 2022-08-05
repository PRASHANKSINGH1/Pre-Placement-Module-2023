class Solution {
    public boolean findTarget(TreeNode root, int k) {
       ArrayList<Integer> s=new ArrayList<>();
        inorder(root,s);
        int left=0,right=s.size()-1,sum=0;
        while(left<right)
        {
            sum=s.get(left)+s.get(right);
            if(sum==k)
                return true;
            else if(sum>k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;  
    }
    public void inorder(TreeNode root, ArrayList<Integer> s)
    {
        if(root==null)
            return;
        inorder(root.left,s);
        s.add(root.val);
        inorder(root.right,s);
    }
}