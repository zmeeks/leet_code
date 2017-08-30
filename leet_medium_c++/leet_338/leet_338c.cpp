class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1,0);
        for(int i=1; i<=num; i++) *(ans.begin()+i) = (i&1) + ans[i>>1];
        return ans;
    }
};