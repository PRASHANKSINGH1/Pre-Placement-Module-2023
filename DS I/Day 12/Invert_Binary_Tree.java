class Solution {
    Deque<TreeNode> dq = new LinkedList<>();
    public TreeNode invertTree(TreeNode root) {
            dq.addLast(root);
            while(!dq.isEmpty()){
                swap(dq.pollFirst());
            }
            return root;
    }
    public void swap(TreeNode root){
        if(root == null){
            return;
        }
        
        TreeNode temp = new TreeNode();
        temp = root.left;
        root.left = root.right;
        root.right = temp;
        
        dq.addLast(root.left);
        dq.addLast(root.right);

    }
}