class NumArray {
    private int[] num_ary;
    
    public NumArray(int[] nums) {
        num_ary = new int[nums.length + 1];
        num_ary[0] = 0;
        for(int i=0; i<nums.length; i++) num_ary[i+1] = num_ary[i] + nums[i];
    }
    
    public int sumRange(int i, int j) {
        return num_ary[j+1]-num_ary[i];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */