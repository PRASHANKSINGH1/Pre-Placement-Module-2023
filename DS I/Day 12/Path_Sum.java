class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null){
            return false;
        }

        int temp = targetSum - root.val;
        
        if (temp == 0 && root.left == null && root.right == null){
            return true;
        }

        return hasPathSum(root.left, temp) || hasPathSum(root.right, temp);
    }
    
    
}