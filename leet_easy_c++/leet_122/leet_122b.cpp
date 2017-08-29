class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0, len= prices.size();
        for(int i=1; i<len; i++) prices[i-1] = prices[i] - prices[i-1];
        for(int i=0; i<len-1; i++) if(prices[i]>0) total += prices[i];
        return total;
    }
};