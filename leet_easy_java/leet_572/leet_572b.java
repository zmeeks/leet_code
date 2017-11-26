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
            str_s += Integer.toString(tmp.val);
            if(tmp.right != null) stk.push(tmp.right); 
            if(tmp.left != null) stk.push(tmp.left); 
            if(tmp.left == null && tmp.right == null) str_s += ".";
            else if(tmp.left == null || tmp.right == null) str_s += ";";
        }
        stk.push(t);
        while(!stk.empty()){
            tmp = stk.pop();
            str_t += Integer.toString(tmp.val);
            if(tmp.right != null) stk.push(tmp.right); 
            if(tmp.left != null) stk.push(tmp.left); 
            if(tmp.left == null && tmp.right == null) str_t += ".";
            else if(tmp.left == null || tmp.right == null) str_t += ";";
            else str_t += ",";
        }
        System.out.println("s = "+str_s+" & t = "+str_t);
        if((";"+str_s).contains(";"+str_t) || (";"+str_s).contains(","+str_t) || (";"+str_s).contains("."+str_t)) return true;
        else return false;
    }
}