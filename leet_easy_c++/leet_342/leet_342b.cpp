class Solution {
public:
    bool isPowerOfFour(int num) {
        bitset<32> b(num);
        return b.count() == 1 && num%3 == 1;
    }
};