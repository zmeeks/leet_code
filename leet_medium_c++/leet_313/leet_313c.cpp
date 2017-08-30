class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n<=0) return 0; if(n==1) return 1; 
        vector<int> nums = primes;
        int n_len = primes.size();
        vector<int> ind(n_len, 0);
        vector<int> ugly(n,0);
        ugly[0] = 1;
        int mini, mj, tmp;
        unordered_map<int, int> umap;
        unordered_map<int, int>::iterator it;
        for(int i=1; i<n; i++){
            mini = INT_MAX;
            for(int j=0; j<n_len; j++) {
                tmp = ugly[ind[j]]*nums[j];
                it = umap.find(tmp);
                while(it != umap.end()){
                    ind[j]++;
                    tmp = ugly[ind[j]]*nums[j];
                    it = umap.find(tmp);
                }
                if(tmp < mini){
                    mini = tmp;
                    mj = j;
                }
            }
            tmp = ugly[ind[mj]]*nums[mj];
            ugly[i] = tmp;
            umap[tmp] = 1;
            ind[mj]++;
        }       
        return ugly[n-1];
    }
};

// This one the first accepted solution.  Still a lot slower than most accepted solutions.