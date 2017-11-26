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
        Map<Integer, Integer> hm = new HashMap<>();
        return pSh(root, sum, hm);
    }
    private int pSh(TreeNode iter, int sum, Map<Integer, Integer> hm) {
        if(iter == null) return 0;
        int cnt = 0;
        hm.put(hm.size(), 0);
        Set set = hm.entrySet();
        Iterator it = set.iterator();
        int key, val;
        while(it.hasNext()){
            Map.Entry<Integer,Integer> me = (Map.Entry<Integer, Integer>)it.next();
            key = me.getKey();
            val = me.getValue() + iter.val;
            if(val == sum){
                cnt++;
            } 
            hm.put(key, val);
        }
        Map<Integer, Integer> hm_l = new HashMap<>(hm);
        Map<Integer, Integer> hm_r = new HashMap<>(hm);
        return pSh(iter.left, sum, hm_l) + pSh(iter.right, sum, hm_r) + cnt;
    }
}

//~ I overlooked the mechanics of this solution idea -- a list would have been better suited (versus a hashmap)
/*
10
5, 15,
3, 8, 18
3, 6, 11, 21
*/