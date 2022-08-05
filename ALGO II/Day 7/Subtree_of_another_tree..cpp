class Solution {
    public boolean isSubtree(TreeNode root, TreeNode subRoot) {
        if (root == null || subRoot == null) return root == null && subRoot == null;
	    Deque<TreeNode> que = new ArrayDeque<>();
	    que.offer(root);
	    while (!que.isEmpty()) {
	        TreeNode node = que.removeFirst();
	        if (compare(node, subRoot)) return true;
	        if (node.left != null) que.addLast(node.left);
	        if (node.right != null) que.addLast(node.right);
        }
        return false;
    }
    public boolean compare(TreeNode root1, TreeNode root2) {
	    if (root1 == null || root2 == null) return root1 == null && root2 == null;
        Deque<TreeNode> que1 = new ArrayDeque<>();
        Deque<TreeNode> que2 = new ArrayDeque<>();
        que1.offer(root1);
        que2.offer(root2);
        while (!que1.isEmpty() && !que2.isEmpty()) {
	        TreeNode node1 = que1.pop();
	        TreeNode node2 = que2.pop();
	        if (node1 == null || node2 == null) return node1 == null && node2 == null;
	        if (node1.val != node2.val) return false;
	        if (node1.left == null) {
                if (node2.left != null) return false;
            } else que1.offer(node1.left);
	        if (node1.right == null) {
                if (node2.right != null) return false;
            } else que1.offer(node1.right);
	        if (node2.left == null) {
                if (node1.left != null) return false;
            } else que2.offer(node2.left);
	        if (node2.right == null) {
                if (node1.right != null) return false;
            } else que2.offer(node2.right);
        }
        // Be careful! :) example: [3,4,5,1,2,null,null,null,null,0], [4,1,2]
        return que1.isEmpty() && que2.isEmpty();
    }
}