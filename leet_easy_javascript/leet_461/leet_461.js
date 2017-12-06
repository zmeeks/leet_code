/**
 * @param {number} x
 * @param {number} y
 * @return {number}
 */
var hammingDistance = function(x, y) {
    var cnt = 0;
    for(var i = 0, mask = 1; i<32; i++){
        if((x&mask)^(y&mask))
            cnt++;
        mask<<=1;
    }
    return cnt;
};