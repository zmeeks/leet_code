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
    private boolean is_balanced;
    public boolean isBalanced(TreeNode root) {
        is_balanced = true;
        find_depth(root);
        return is_balanced;
    }
    private int find_depth(TreeNode iter){
        if(iter == null || is_balanced == false) return 0;
        int fd_left = find_depth(iter.left), fd_right = find_depth(iter.right);
        if(Math.abs(fd_left - fd_right) > 1) is_balanced = false;
        return Math.max(fd_left, fd_right) + 1;
    }
}