class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        int len = costs.size();
        if(len == 0) return 0;
        int r = costs[0][0];
        int b = costs[0][1]; 
        int g = costs[0][2];
        int r_1, b_1, g_1;
        for(int i=1; i<len; i++){
            r_1 = min(b,g) + costs[i][0];
            b_1 = min(r,g) + costs[i][1];
            g_1 = min(r,b) + costs[i][2];
            r = r_1; b = b_1; g = g_1;
        }
        len = min(r,min(b,g));
        return len;
    }
};