/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var profit = 0, val = prices[0];
    for(var i=1; i<prices.length; i++){
        if(val <= prices[i]) profit = Math.max(profit, prices[i] - val);
        else val = prices[i];           
    }
    return profit;
};