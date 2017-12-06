/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function(num) {
    return num ^ ((1<<(Math.log2(num)+1)) - 1);
    //~ note: it's given that integer is positive. this wouldn't work with negative integers
};

