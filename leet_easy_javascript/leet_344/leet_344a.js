/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function(s) {
    var ary = [];
    ary.length = s.length;
    for(var i=0, j=s.length-1; i<s.length; i++, j--)
        ary[i]=s.charAt(j);
    return ary.join('');
};