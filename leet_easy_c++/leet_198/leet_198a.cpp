class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> houses = nums;
        houses.push_back(0); houses.push_back(0);
        int len = houses.size();
        if(len == 2) return 0;
        houses[2] += houses[0];
        for(int i=3; i<len; i++)
            houses[i]= max(houses[i-2], houses[i-3]) + houses[i];
        return houses[len-1];
    }
};