class Solution {
public:
    int climbStairs(int n) {
        int total = recur_func(n);
        return total;
    }
    int recur_func(int tot){
        if(tot < 0) return 0;
        if(tot == 0) return 1;
        return recur_func(tot - 1) + recur_func(tot - 2);
    }
};
// potential stack overflow. dynamic programming necessary!