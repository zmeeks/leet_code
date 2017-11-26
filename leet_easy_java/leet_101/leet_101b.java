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
    public boolean isSymmetric(TreeNode root) {
        if(root == null) return true;
        Stack<TreeNode> stk = new Stack<TreeNode>();
        stk.push(root.left);
        stk.push(root.right);
        while(!stk.empty()){
            TreeNode a = stk.pop();
            TreeNode b = stk.pop();
            if(a == null && b == null){
                //~ do nothing
            }else if (a == null || b == null){
                return false;
            }else if(a.val != b.val){
                return false;
            }else{
                stk.push(a.left);
                stk.push(b.right);
                stk.push(a.right);
                stk.push(b.left);
            }
        }
        return true;
    }
}