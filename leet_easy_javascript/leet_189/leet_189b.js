/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    var stopper = nums.length - (k%nums.length);
    for(var i=0; i<stopper; i++) nums.push(nums.shift());
};

