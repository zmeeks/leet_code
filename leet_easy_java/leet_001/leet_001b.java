class Solution {
    public int[] twoSum(int[] nums, int target) {
        int len = nums.length;
        HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
        for(int i=0; i< len; i++){
            if(hmap.get(target - nums[i]) != null){
                return new int[]{hmap.get(target - nums[i]), i};
            } 
            hmap.put(nums[i], i);
        }
        return new int[2];
    }
}