class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int []nums2 = new int[nums.length];
        System.arraycopy(nums, 0, nums2, 0, nums.length);
        Arrays.sort(nums2);
        int start, end;
        for(start = 0; start < nums.length; ++start){
            if(nums[start]!=nums2[start])
                break;
        }
        for(end = nums.length-1; end > start; --end){
            if(nums[end] != nums2[end])
                break;
        }
        return end - start  + 1; //~ nums.length - (start + nums.length - end - 1)
    }
}