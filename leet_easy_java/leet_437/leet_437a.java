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
    public int pathSum(TreeNode root, int sum) {
        if(root == null) return 0;
        return pSh(root, sum) + pathSum(root.right, sum) + pathSum(root.left, sum); 
    }
    private int pSh(TreeNode iter, int sum){
        if(iter == null) return 0;
        if(iter.val == sum) return 1 + pSh(iter.left, sum - iter.val) + pSh(iter.right, sum - iter.val);
        return pSh(iter.left, sum - iter.val) + pSh(iter.right, sum - iter.val);
    }
}