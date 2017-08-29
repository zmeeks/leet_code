class Solution {
public:
    int reverse(int x) {
        long long int ans = 0, sgn = (x < 0 ? -1 : 1), comp = (long long)1<<31, z = x;
        z = (z < 0 ? z*(-1) : z);
        while(z){
            ans = (ans*10) + z%10;
            z/=10;
        }
        if(ans > comp || (ans == comp && sgn == 1)) return 0;
        return (sgn == 1 ? ans : ans*(-1));
    }
};