class Solution {
public:
    int climbStairs(int n) {
        vec.resize(n+2,0);
        vec[1]=1;
        vec[2]=2;
        recur_func(3,n);
        return vec[n];
    }
    void recur_func(int cur, int n){
        if(cur > n) return;
        vec[cur] = vec[cur-1] + vec[cur-2];
        recur_func(cur+1,n);
    }
    vector<int> vec;
};
