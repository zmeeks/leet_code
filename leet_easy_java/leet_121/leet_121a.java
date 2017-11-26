class Solution {
    public int maxProfit(int[] prices) {
        int len = prices.length, _min = Integer.MAX_VALUE, _max = Integer.MIN_VALUE, profit = 0;
        for(int i=0; i< len; i++){
            int prev_min = _min;
            _min = Math.min(_min, prices[i]);
            _max = Math.max(_max, prices[i]);
            if(prev_min == _min) 
                profit = Math.max(profit, _max - _min);
            else
                _max = Integer.MIN_VALUE;
        }
        return profit;
    }
}