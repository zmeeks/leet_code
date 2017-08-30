class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) { 
        int n_len = primes.size();
        vector<int> ind(n_len,0), ugly(n,0);
        ugly[0] = 1;
        for(int i=1; i<n; i++){
            ugly[i] = INT_MAX;
            for(int j=0; j<n_len; j++) ugly[i] = min(ugly[i], ugly[ind[j]]*primes[j]);
            for(int j=0; j<n_len; j++) if(ugly[ind[j]]*primes[j] == ugly[i]) ind[j]++;
        }       
        return ugly[n-1];
    }
};

//not quite as optimized as previous solution, but much more concise/readable code