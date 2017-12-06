/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var profit = 0, val = prices[0];
    for(var i=1; i<prices.length; i++){
        profit = Math.max(profit, prices[i] - val);
        val = Math.min(val, prices[i]);           
    }
    return profit;
};