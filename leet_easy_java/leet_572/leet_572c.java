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
        Stack<TreeNode> stk = new Stack<>();
        String str_s = "";
        String str_t = "";
        TreeNode tmp;
        stk.push(s);
        while(!stk.empty()){
            tmp = stk.pop();
            if(tmp == null){
                str_s += "N,";
                continue;
            } 
            str_s += Integer.toString(tmp.val)+",";
            stk.push(tmp.right); 
            stk.push(tmp.left); 
        }
        stk.push(t);
        while(!stk.empty()){
            tmp = stk.pop();
            if(tmp == null){
                str_t += "N,";
                continue;
            } 
            str_t += Integer.toString(tmp.val)+",";
            stk.push(tmp.right); 
            stk.push(tmp.left); 
        }
        if((","+str_s).contains(","+str_t)) return true;
        else return false;
    }
}