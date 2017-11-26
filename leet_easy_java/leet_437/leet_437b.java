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
    public int pathSum(TreeNode root, int sum){
        return pathSum(root, sum, 0);
    }
    public int pathSum(TreeNode root, int sum, int flag){
        if(root == null) return 0;
        if(flag == 0){
            if(root.val == sum) return pathSum(root.right, sum,0) + pathSum(root.left, sum,0) + pathSum(root.left, sum - root.val, 1) + pathSum(root.right, sum - root.val, 1) + 1;
            return pathSum(root.right, sum, 0) + pathSum(root.left, sum, 0) + pathSum(root.left, sum - root.val, 1) + pathSum(root.right, sum - root.val, 1);
        }
        else{
            if(root.val == sum) return pathSum(root.left, sum - root.val, 1) + pathSum(root.right, sum - root.val, 1) + 1;
            return pathSum(root.left, sum - root.val, 1) + pathSum(root.right, sum - root.val, 1);
        }
    }
}