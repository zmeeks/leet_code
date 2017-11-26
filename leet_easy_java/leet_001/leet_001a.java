class Solution {
    public int[] twoSum(int[] nums, int target) {
        int len = nums.length;
        HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
        for(int i=0; i< len; i++){
            if(hmap.get(target - nums[i]) != null){
                int[] ret = {hmap.get(target - nums[i]), i};
              return ret;  
            } 
            hmap.put(nums[i], i);
        }
        int[] err = {-1,-1};
        return err;
    }
}