class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> hmap = new HashMap<Integer, Integer>();
        for(int x : nums){
            if(hmap.remove(x) == null){
                hmap.put(x, 1);
            }
        }
        return hmap.keySet().iterator().next();
    }
}