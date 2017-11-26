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
    //~ dfs(left) + dfs(right) or dobt(left) or dobt(right)
    public int diameterOfBinaryTree(TreeNode root) {
        if(root == null) return 0;
        return Math.max(DFS(root.left) + DFS(root.right), Math.max(diameterOfBinaryTree(root.left), diameterOfBinaryTree(root.right)));
    }
    public int DFS(TreeNode iter){
        if(iter == null) return 0;
        return Math.max(DFS(iter.left), DFS(iter.right)) + 1;
    }
}