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
    public boolean isSubtree(TreeNode s, TreeNode t) {
        if(t == null) return true;
        if(s == null) return false;
        StringBuilder sb_s = new StringBuilder();
        StringBuilder sb_t = new StringBuilder();
        iSh(s, sb_s);
        iSh(t, sb_t);
        if((","+sb_s).contains(","+sb_t)) return true;
        else return false;
    }
    //~ iSh = is Subtree helper
    private void iSh(TreeNode t, StringBuilder sb){
        if(t == null){
            sb.append("N,");
            return;
        }
        sb.append(Integer.toString(t.val)+",");
        iSh(t.right, sb);
        iSh(t.left, sb);
    }   
}