class Solution {
public:  
    int myAtoi(string str) {
        int num, sgn=0, i=0, len = str.size();
        long long int ans=0;
        while(i<len && *(str.begin()+i)==' ') i++;
        if(str[i]=='+') i++;
        else if(str[i]=='-') {
            sgn = 1; 
            i++;
        }
        num = str[i] - '0';                 //don't need to check for i<len here or above bc strings are null-terminated
        while(num >= 0 && num <= 9){
            ans = (ans*10) + num;
            if(ans > INT_MAX && sgn == 0) return INT_MAX;
            if(ans > INT_MAX && sgn == 1) return INT_MIN;
            if(++i>=len) break;
            num = str[i] - '0';
        } 
        if(sgn == 1) ans*= -1;
        return ans;
    }
};