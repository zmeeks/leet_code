/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var tmp;
    if(x>=0) return ((tmp = 1*(x.toString().split('').reverse().join(''))) < (-1>>>1) ? tmp : 0);          
    else return -1*((tmp = +((-1*x).toString().split('').reverse().join(''))) < (-1*(1<<31)) ? tmp : 0);
    
    //~ note: 1*string, +string, ~~string, Number(string), and parseInt(string) are all ways of coercing string to integer
    //~ however, ~~(string) doesn't work for strings whose number representation >= (1<<31)
};