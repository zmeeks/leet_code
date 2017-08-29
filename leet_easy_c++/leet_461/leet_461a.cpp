class Solution {
public:
    int hammingDistance(int x, int y) {
        int tmp, cnt = 0, mask = 1;
        for(int i=0; i<32; i++, mask<<=1)
            if(((x&mask)^(y&mask)) != 0) cnt++;
        return cnt;
    }
};