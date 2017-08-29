class Solution {
public:
    bool isPowerOfFour(int num) {
        for(int i=0; i<31; i+=2)
            if(num == 1<<i) return true;
        return false;
    }
};