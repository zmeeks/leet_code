class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int len = nums.length;
        List<Integer> res = new ArrayList<>();
        for(int x : nums){
            int i = Math.abs(x)-1;
            nums[i] = -Math.abs(nums[i]);
        }
        for(int i=0; i<len; i++){
            if(nums[i]>0) res.add(i+1); 
        }
        return res;
    }
}