class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int prev_min=Integer.MIN_VALUE, cur_min=Integer.MAX_VALUE, i_min=0, prev_max=Integer.MAX_VALUE, cur_max=Integer.MIN_VALUE, i_max=0;
        for(int x : nums){
            if(x >= prev_min) prev_min = x;
            else cur_min = Math.min(x, cur_min);
        }
        for(int i=nums.length - 1; i>=0; i--){
            int x = nums[i];
            if(x <= prev_max) prev_max = x;    
            else cur_max = Math.max(x, cur_max);
        }
        if(cur_min == Integer.MAX_VALUE) return 0;
        if(nums[0]>cur_min) i_min = 0;
        else{
            for(int i=0; i<nums.length-1; i++){
                if(nums[i]<=cur_min && nums[i+1]>cur_min){
                    i_min = i+1;
                    break;
                } 
            }
        }
        if(nums[nums.length -1]<cur_max) i_max = nums.length - 1;
        else{
            for(int i=nums.length-1; i>0; i--){
                if(nums[i]>=cur_max && nums[i-1]<cur_max){
                    i_max = i-1;
                    break;
                } 
            }
        }
        return i_max - i_min + 1;
    }
}