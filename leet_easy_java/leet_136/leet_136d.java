//~ using the ordered TreeMap ... note: this is WAY slower than HashMap 

class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> tmap = new TreeMap<Integer, Integer>();
        for(int x : nums){
            if(tmap.remove(x) == null){
                tmap.put(x, 1);
            }
        }
        return tmap.keySet().iterator().next();
    }
}