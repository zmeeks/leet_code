class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> z(x^y);
        return z.count();
    }
};