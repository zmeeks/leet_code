class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> k(n);
        return k.count();
    }
};