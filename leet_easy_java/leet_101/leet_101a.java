/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        if(root == null) return true;
        return iSh(root.left, root.right);
    }
    private boolean iSh(TreeNode left, TreeNode right){ //~ iSh = is Symmetric helper
        if(left == null && right == null) return true;
        if(left == null || right == null || left.val != right.val) return false;
        return iSh(left.left, right.right) && iSh(left.right, right.left);
    }
}