/**
 * @param {number} n
 * @return {string}
 */
var convertToTitle = function(n) {
    var last = n%26;
    if(last === 0) last = 26;
    if(n<= 26) return String.fromCharCode(last + 64);
    else return convertToTitle(Math.floor((n-1)/26)) + String.fromCharCode(last + 64);
};