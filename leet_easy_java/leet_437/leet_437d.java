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
        HashMap<Integer, Integer> hm = new HashMap<>();
        hm.put(0,1); //~ for if cur-target == 0
        return pSh(root, 0, sum, hm);
    }
    //~ pSh = path Sum helper
    private int pSh(TreeNode iter, int cur, int target, HashMap<Integer, Integer> hm){
        if(iter == null) return 0;
        cur += iter.val;
        int ret = hm.getOrDefault(cur-target, 0);
        hm.put(cur, hm.getOrDefault(cur, 0)+1);
        ret += pSh(iter.left, cur, target, hm) + pSh(iter.right, cur, target, hm);
        hm.put(cur, hm.getOrDefault(cur, 1)-1);
        return ret;
    }
}