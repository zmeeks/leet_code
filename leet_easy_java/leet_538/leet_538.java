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
    private int _sum = 0;
    public TreeNode convertBST(TreeNode root) {
        if(root == null) return root;
        convertBST(root.right);
        _sum += root.val;
        root.val = _sum;
        convertBST(root.left);        
        return root;
    }
}