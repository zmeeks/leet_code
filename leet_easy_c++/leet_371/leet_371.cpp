class Solution {
public:
    int getSum(int a, int b) {
        int tmp;
        while(((a & b)<<1) & (a^b)){
            tmp = ((a & b)<<1);
            b = (a^b);
            a = tmp;
        }
        return (((a & b)<<1) | (a^b));
    }
};
