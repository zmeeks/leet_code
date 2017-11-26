class Solution {
    public int maxProfit(int[] prices) {
        int len = prices.length, _min = Integer.MAX_VALUE, profit = 0;
        for(int i=0; i< len; i++){
            _min = Math.min(_min, prices[i]);
            profit = Math.max(profit, prices[i] - _min);
        }
        return profit;
    }
}