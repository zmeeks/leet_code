// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long long int guess_g, low=1, high=n, g=(n+1)>>1;
        guess_g = guess(g);
        while(guess_g != 0){
            if(guess_g==1){
                low = g+1;
                g = (g+high+1)>>1;
            }
            else{
                high = g-1;
                g = (g+low)>>1;
            }
            guess_g = guess(g);
        }
        return g;
    }
};
