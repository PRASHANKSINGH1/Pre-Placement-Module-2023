class Solution {
    public TreeNode searchBST(TreeNode root, int val) {
        while(root!=null)
        {
            if(val==root.val){
                return root;
            }
            else if(val<root.val)
            {
                root=root.left;
            }
            else{
                root=root.right;
            }
        }
        return null;
    }
}