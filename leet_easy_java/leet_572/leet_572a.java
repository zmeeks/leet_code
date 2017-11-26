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
        if(s == null && t == null) return true;
        if(s == null || t == null) return false;
        if(s.val==t.val)
            return iSh(s,t) || isSubtree(s.left, t) || isSubtree(s.right, t);
        else
            return isSubtree(s.left, t) || isSubtree(s.right, t);
    }
    //~ iSh = Is Subtree helper
    private boolean iSh(TreeNode s, TreeNode t) { 
        if(s == null && t == null) return true;
        if(s == null || t == null) return false;
        if(s.val != t.val) 
            return false;
        else
            return iSh(s.left, t.left) && iSh(s.right, t.right);
    }
}