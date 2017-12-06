/**
 * @param {number} n
 * @return {character}
 */
var hexify = function(n){
    if(n<=9) return n.toString();
    if(n == 10) return "a";
    if(n == 11) return "b";
    if(n == 12) return "c";
    if(n == 13) return "d";
    if(n == 14) return "e";
    return "f";
};

/**
 * @param {number} num
 * @return {string}
 */
var toHex = function(num) {
    if(num == 0) return "0";
    var res = "";
    if(num>0){
        while(num>0){
            res = hexify(num%16) + res;
            num = Math.floor(num/16);
        }
    }
    else{
        var mask = 1, tmp;
        for(var i=0; i<8; i++){
            tmp = 0;
            for(var j=0; j<4; j++){
                tmp += (1<<j)*((num&mask) != 0 ? 1 : 0);
                mask=mask<<1;
            }
            res = hexify(tmp) + res;
        }
    }
    return res;
};