/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var n = nums.length, res = 0;
    for(var i in nums){
        res ^= nums[i];
        res ^= i;
    } 
    return res^n;
};