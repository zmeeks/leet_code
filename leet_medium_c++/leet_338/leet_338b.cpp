class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1);
        if(num == 0) return {0}; if(num == 1) return {0,1};
        ans[0] = 0; ans[1] = 1;
        for(int i=2; i<=num; i++) ans[i] = (i&1) + ans[i>>1];
        return ans;
    }
};
