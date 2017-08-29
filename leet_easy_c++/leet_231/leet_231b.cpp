class Solution {
public:
    bool isPowerOfTwo(int n) {
        int mask = 1, cnt = 0;
        for(int i=0; i<32; i++){
            if((mask & n) > 0) cnt++;
            mask<<=1;
        }
        return cnt==1 && n>0;
    }
};