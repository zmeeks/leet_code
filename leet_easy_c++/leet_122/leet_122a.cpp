class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j, total = 0, i = 0, len = prices.size();
        if(len < 2) return 0;
        while(i<len-1 && prices[i]>=prices[i+1]) i++;
        if(i == len-1) return 0;
        while(i<len-1){
            j=i+1;
            while(j<len-1 && prices[j]<prices[j+1]) j++;
            total += prices[j] - prices[i];
            i=j+1;
            while(i<len-1 && prices[i]>=prices[i+1]) i++;
        }
        return total;
    }
};