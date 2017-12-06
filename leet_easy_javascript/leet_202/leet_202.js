/**
 * @param {number} n
 * @return {number}
 */
var squared = function(n){
    return n*n;  
};

var _sum = (a , b) => a+b;

/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    var dict = {};
    var k;
    while(n != 1){
        if(!(n in dict)) k = n.toString().split('').map(Number).map(squared).reduce(_sum);
        else return false;
        dict[n] = k;
        n = k;
    }
    return true;
};