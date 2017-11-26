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
    public TreeNode mergeTrees(TreeNode t1, TreeNode t2) {
        if(t1 == null && t2 == null) return null;
        if(t1 == null){
            TreeNode tNew = new TreeNode(t2.val);
            t1 = tNew;
        }else{
            t1.val += (t2 == null ? 0 : t2.val);
        }
        t1.left = mergeTrees(t1.left, (t2 == null ? null : t2.left));
        t1.right = mergeTrees(t1.right, (t2 == null ? null : t2.right));
        return t1;
    }
}
