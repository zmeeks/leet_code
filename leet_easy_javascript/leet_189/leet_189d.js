/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    var shifted_nums = nums.slice(nums.length - k%nums.length, nums.length).concat(nums.slice(0, nums.length - k%nums.length));
    for(var ind in nums) nums[ind] = shifted_nums[ind];
};