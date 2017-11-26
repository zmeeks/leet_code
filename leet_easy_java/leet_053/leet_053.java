class Solution {
    public int maxSubArray(int[] nums) {
        int _max = nums[0], tmp = 0, len = nums.length;
        for(int i=0; i<len; i++){
            tmp += nums[i];
            _max = Math.max(_max, tmp);
            if(tmp<0) tmp = 0;
        }
        return _max;
    }
}