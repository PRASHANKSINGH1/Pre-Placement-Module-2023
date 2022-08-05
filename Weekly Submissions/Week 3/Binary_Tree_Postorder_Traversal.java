class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> postorder = new ArrayList<>();
        Stack<TreeNode> stack = new Stack<>();
        while (true) {
            while (root != null) {
                stack.push(root);
                stack.push(root);
                root = root.left;
            }
            if (stack.isEmpty()) break;
            root = stack.pop();
            if (!stack.isEmpty() && stack.peek() == root)
                root = root.right;
            else {
                postorder.add(root.val);
                root = null;
            }
        }
        return postorder;
    }
}