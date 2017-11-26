class NumArray {
    private int[] num_ary;
    
    public NumArray(int[] nums) {
        num_ary = nums;
        for(int i=1; i<nums.length; i++) num_ary[i] = num_ary[i-1] + nums[i];
    }
    
    public int sumRange(int i, int j) {
        return (i == 0 ? num_ary[j] : num_ary[j]-num_ary[i-1]);
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */