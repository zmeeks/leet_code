class Solution {
public:
    int climbStairs(int n) {
        vec.resize(n+2,0);
        vec[1] = 1; vec[2] = 2;
        recur_func(n);
        return vec[n];
    }
    int recur_func(int n){
        if(n <= 2) return n;
        if(vec[n] != 0) return vec[n];
        vec[n] = recur_func(n-1) + recur_func(n-2);
        return vec[n];
    }
    vector<int> vec;
};