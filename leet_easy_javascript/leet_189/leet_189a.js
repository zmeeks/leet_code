/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    var res = [];
    res.length = nums.length;
    for(var i=0; i<nums.length; i++) res[(i+k)%nums.length]=nums[i];
    for(i=0; i<nums.length; i++) nums[i] = res[i];
};