class Solution {
    public void moveZeroes(int[] nums) {
        int zero = nums.length - 1;
        for(int j=0, z = 0; j<zero; ){
            for(j=z; j<nums.length; j++){
                if(nums[j]==0){
                    z = j;
                    break;
                }
            }
            if(j >= zero) break;
            for(int i = z+1; i<=zero; i++){
                nums[i-1] = nums[i];    
            }   
            nums[zero] = 0;
            zero--;           
        }
    }
}