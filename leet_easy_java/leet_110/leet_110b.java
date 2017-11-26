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
    public boolean isBalanced(TreeNode root) {
        return find_depth(root)>=0;
    }
    private int find_depth(TreeNode iter){
        if(iter == null) return 0;
        int fd_left = find_depth(iter.left), fd_right = find_depth(iter.right);
        if(Math.abs(fd_left - fd_right) > 1 || fd_left == -1 || fd_right == -1) return -1;
        return Math.max(fd_left, fd_right) + 1;
    }
}