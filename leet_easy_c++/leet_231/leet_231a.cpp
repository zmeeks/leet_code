class Solution {
public:
    bool isPowerOfTwo(int n) {
        bitset<32> k(n);
        return k.count()==1 && n>0;
    }
};