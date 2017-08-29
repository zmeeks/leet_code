class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false; if(x/10 == 0) return true; 
        long long int tmp;
        bool flag = false;
        while(x>0){
            tmp = 1;
            while(tmp*10 < x) tmp*=10;
            if(x%10 != x/tmp || x == 10) return false;
            x = x - (x/tmp)*tmp;
            x=x/10;
            while(x<tmp/100){
                if(x%10 != 0) return false;
                tmp = tmp/100;          
                x = x/10;
            }
        }
        return true;
    }
};

// Note: This doesn't take up extra memory (as it would if arrays or strings were used to check for palindromness)