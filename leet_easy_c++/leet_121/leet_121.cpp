class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len == 0) return 0;
        int tmp, mini = *(prices.begin()), prof = 0;
        for(int i=1; i<len; i++){
            tmp = *(prices.begin() + i);
            if(tmp < mini) mini = tmp;
            if(tmp - mini > prof) prof = tmp - mini;
        }
        return prof;
    }
};