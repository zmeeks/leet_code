/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function(s) {
    var ary = s.split('');
    ary.reverse();
    return ary.join('');
};