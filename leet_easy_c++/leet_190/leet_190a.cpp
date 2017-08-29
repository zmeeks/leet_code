class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> k(n);
        string str = k.to_string();
        reverse(str.begin(),str.end());
        stringstream ss;
        ss<<str;
        ss>>k;
        return k.to_ulong();
    }
};