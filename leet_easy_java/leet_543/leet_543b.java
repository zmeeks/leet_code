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
    private int diam;
    public int diameterOfBinaryTree(TreeNode root) {
        diam = 0;
        DFS(root);
        return diam;
    }
    public int DFS(TreeNode iter){
        if(iter == null) return 0;
        int _left = DFS(iter.left), _right = DFS(iter.right);
        diam = Math.max(_left+_right, diam);
        return Math.max(_left, _right) + 1;
    }
}