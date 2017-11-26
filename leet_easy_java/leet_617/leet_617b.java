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
        if(t1 == null || t2 == null) return (t1 == null ? t2 : t1);
        TreeNode t_new = new TreeNode(0);
        mTh(t1,t2,t_new);
        return t_new;
    }
    private void mTh(TreeNode t1, TreeNode t2, TreeNode t3){ //~ mTh = merge Trees helper
        if(t1 == null && t2 == null) return;
        t3.val = (t1 == null ? 0 : t1.val) + (t2 == null ? 0 : t2.val);
        if((t1!=null && t1.left != null) || (t2 != null && t2.left != null)){
            TreeNode t_L = new TreeNode(0);
            t3.left = t_L;
            mTh((t1 == null ? null : t1.left), (t2 == null ? null : t2.left), t3.left);
        }
        if((t1!=null && t1.right != null) || (t2 != null && t2.right != null)){
            TreeNode t_R = new TreeNode(0);
            t3.right = t_R;
            mTh((t1 == null ? null : t1.right), (t2 == null ? null : t2.right), t3.right);
        }
    }
}