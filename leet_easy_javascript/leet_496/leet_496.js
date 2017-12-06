/**
 * @param {number[]} findNums
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElement = function(findNums, nums) {
    var last = nums[nums.length - 1];
    var dict = {};
    dict[last]=-1;
    for(var i=nums.length - 2; i>=0; i--){
        if(nums[i] < last)
            dict[nums[i]] = last;
        else{
            while(last != -1 && nums[i]>last){
                last = dict[last];
            }
            dict[nums[i]] = last;
        }
        last = nums[i];
    }
    for(i = 0; i<findNums.length; i++){
        findNums[i] = dict[findNums[i]];
    }
    return findNums;
};