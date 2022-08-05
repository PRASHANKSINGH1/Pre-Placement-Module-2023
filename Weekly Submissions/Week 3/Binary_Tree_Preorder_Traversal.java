class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> ls = new ArrayList<>();
        preorder(root, ls);
        return ls;
    }
    public void preorder(TreeNode root, List<Integer> ls){
        if(root==null){
            return;
        }
        ls.add(root.val);
        preorder(root.left, ls);
        preorder(root.right, ls);
    }
}