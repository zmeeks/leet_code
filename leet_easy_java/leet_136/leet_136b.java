class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
        for(int x : nums) hmap.put(x, ( hmap.get(x)==null ? 1 : 2));
        for (Map.Entry<Integer, Integer> entry : hmap.entrySet()) {
            if(entry.getValue() == 1)
                return entry.getKey();
        }
        return -1; //~ if reached here --> would signal an error
    }
}