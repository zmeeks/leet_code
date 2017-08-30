class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1);
        for(int i=0; i<=num; i++) ans[i] = bit_cnt(i);
        return ans;
    }
    
    int bit_cnt(int k){
        int tmp=0;
        while(k>0){
            tmp+=k&1;
            k=k>>1;
        }
        return tmp;
    }
};