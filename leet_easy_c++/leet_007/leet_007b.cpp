class Solution {
public:
    int reverse(int x) {
        int sign = (x >= 0 ? 1 : -1);
        int y = (x >= 0 ? x : -x);
        string int_str = to_string(y);
        std::reverse(int_str.begin(), int_str.end());
        long long int temp = atoll(int_str.c_str());
        long long int compare = (long long int)1<<31;
        if(temp > compare) return 0;
        if(temp == compare && sign == 1 ) return 0;
        return (sign == 1 ? temp : temp*(-1)); 
    }
};