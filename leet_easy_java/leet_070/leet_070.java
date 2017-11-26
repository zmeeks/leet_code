class Solution {
    public int climbStairs(int n) {
        if(n < 3) return n;
        int a = 1, b = 2, t;
        for(int i = n; n>2; n--){
            t = a + b;
            a = b;
            b = t;
        }
        return b;
    }
}