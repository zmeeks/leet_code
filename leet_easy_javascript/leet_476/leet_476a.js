/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function(num) {
    var mask = 1<<31;
    var new_num = num;
    while((mask&new_num) === 0) mask>>>=1;
    while(mask > 0){
        new_num^=mask;
        mask= mask >>> 1;
    }
    return new_num;
};