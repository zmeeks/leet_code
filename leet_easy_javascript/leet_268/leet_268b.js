/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var dict = {};
    for(var i in nums) dict[nums[i]] = 1;
    for(i=0; i<=nums.length; i++) if(dict[i] === undefined) return i; 
};