class Solution {
    public boolean isValidBST(TreeNode root) {
        Stack<TreeNode> stack = new Stack<>();
        long order = Long.MIN_VALUE;
        TreeNode temp = root;
        while (temp != null || !stack.isEmpty()) {
            if (temp != null) {
                stack.push(temp);
                temp = temp.left;
            } else {
                TreeNode curr = stack.pop();
                if (curr.val <= order) {
                    return false;
                } else {
                    order = curr.val;
                }
                temp=curr.right;
            }
        }
        return true;
    }
}