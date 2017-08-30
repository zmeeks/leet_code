class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> nums = primes;
        int n_len = primes.size();
        vector<int> ind(n_len,0);
        vector<int> ugly(n,0);
        ugly[0] = 1;
        int mini, mj, tmp;
        for(int i=1; i<n; i++){
            mini = INT_MAX;
            for(int j=0; j<n_len; j++) {
                tmp = ugly[ind[j]]*nums[j];
                if(tmp < mini){
                    mini = tmp;
                    mj = j;
                }
            }
            tmp = ugly[ind[mj]]*nums[mj];
            ugly[i] = tmp;
            for(int j=0; j<n_len; j++) 
                if(ugly[ind[j]]*nums[j] == tmp) ind[j]++;
        }       
        return ugly[n-1];
    }
};

// Finally a fast solution.  This one beats over 90% of other accepted solutions