/**
 * @param {number[]} nums
 * @return {number}
 */

var thirdMax = function(nums) {
    var max_1, max_2, max_3;
    for(var ind in nums){
        if(max_1 === undefined || nums[ind] >= max_1){
            if(nums[ind] === max_1) continue;
            max_3 = max_2;
            max_2 = max_1;
            max_1 = nums[ind];
        }else if(max_2 === undefined || nums[ind] >= max_2){
            if(nums[ind] === max_2) continue;
            max_3 = max_2;
            max_2 = nums[ind];
        }else if(max_3 === undefined || nums[ind] > max_3){
            max_3 = nums[ind];
        }
    }
    if(max_3 !== undefined) return max_3;
    else return max_1;
};