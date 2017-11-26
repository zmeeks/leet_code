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
        StringBuilder sb_s = new StringBuilder();
        StringBuilder sb_t = new StringBuilder();
        TreeNode tmp;
        stk.push(s);
        while(!stk.empty()){
            tmp = stk.pop();
            if(tmp == null){
                sb_s.append("N,");
                continue;
            } 
            sb_s.append(Integer.toString(tmp.val)+",");
            stk.push(tmp.right); 
            stk.push(tmp.left); 
        }
        stk.push(t);
        while(!stk.empty()){
            tmp = stk.pop();
            if(tmp == null){
                sb_t.append("N,");
                continue;
            } 
            sb_t.append(Integer.toString(tmp.val)+",");
            stk.push(tmp.right); 
            stk.push(tmp.left); 
        }
        if((","+sb_s).contains(","+sb_t)) return true;
        else return false;
    }
}