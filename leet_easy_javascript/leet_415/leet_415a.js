/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {
    var res = "", i = 0, carry = 0, tmp = 0;
    num1 = num1.split('').reverse().join('');
    num2 = num2.split('').reverse().join('');
    while(num1[i] !== undefined || num2[i] !== undefined || carry === 1) {
        tmp = (num1[i] !== undefined ? ~~num1[i] : 0) + (num2[i] !== undefined ? ~~num2[i] : 0)  + carry;
        if(tmp > 9){
            carry = 1;
            tmp = tmp%10;
        }else{
            carry = 0;
        }    
        res = tmp.toString() + res;
        i++;
    }
    return res;
};