class Solution {
public:
    int numWays(int n, int k) {
        if(n==0 || k==0) return 0; 
        int same = 0, dif=k, tmp;
        for(int i=1; i<n; i++){
            tmp = dif;
            dif = (same+dif)*(k-1);
            same = tmp;
        }
        return same + dif;
    }
};
/*
    n=0 --> 0
    n=1 --> k
    n=2 --> k^2
    n=3 --> (same+dif) --> dif = prev*k-1, same = num_of_ways_was_dif_at_last_iter
*/