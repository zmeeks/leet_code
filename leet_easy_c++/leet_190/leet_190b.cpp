class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int tmp, mask = 1, x = 1;
        unsigned int ret=0;
        string str = "";
        for(int i=0; i<32; i++){
            tmp = mask&n;
            mask<<=1;
            str += (tmp != 0 ? "1" : "0");
        }
        for(int i=31; i>=0; i--, x*=2)
            if(str[i]=='1') ret+=x;
        return ret;
    }
};