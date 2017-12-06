/**
 * Definition for isBadVersion()
 * 
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function(isBadVersion) {
    /**
     * @param {integer} l = left val
     * @param {integer} r = right val
     * @return {integer} binary search val
     */
    var helper = function(l, r){
        if(l>=r) return l;
        var m = Math.floor((l+r)/2);
        if(isBadVersion(m) == true) return helper(l, m); //~ note: do not want to lose m from the potential solution set
        else return helper(m+1, r);
    };
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
        return helper(1, n);
    };
};
