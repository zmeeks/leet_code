class Solution {
    public void moveZeroes(int[] nums) {
        int tmp;
        for(int i=0, j=0; i<nums.length; i++){
            if(nums[i]!=0){
                tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
                j++;
            }
        }
    }
}
/*
[#$0, 1, 0, 3, 12]
[#0, $1, 0, 3, 12]
[1, #0, $0, 3, 12]
[1, #0, 0, $3, 12]
[1, 3, #0, 0, $12]
[1, 3, #0, 0, $12]
[1, 3, 12, #0, 0] $
*/