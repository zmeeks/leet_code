/**
 * @param {character} c 
 * @return {boolean}
 */
var isLowerAlphaNumeric = function(c){
    return /[a-z0-9]/.test(c);  
};

/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.toLowerCase();
    var f = 0, b = s.length-1;
    while(f<b){
        while(!isLowerAlphaNumeric(s[f]) && f<b) f++;
        while(!isLowerAlphaNumeric(s[b]) && f<b) b--;
        if(f==b) return true;
        if(s[f] !== s[b]) return false;
        f++;
        b--;
    }
    return true;
};