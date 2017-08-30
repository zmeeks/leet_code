class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m<(INT_MAX>>1) && n>=(m<<1)) return 0;
        int ret = -1;
        for(int prev = m; m<=n && m>=prev; prev = m, m++) ret = ret&m;
        return ret;
    }
};