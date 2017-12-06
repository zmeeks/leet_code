/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    var front = s.toLowerCase().slice();
    front = front.replace(/[.,\/@#?!$'%\^<>&|\*;\\:"\[\]{}=+\-_`~()\s]/g,"");
    var back = front.slice().split('').reverse().join('');
    if(back === front) return true;
    else return false;
};