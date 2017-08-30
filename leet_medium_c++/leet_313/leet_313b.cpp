class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n<=0) return 0; if(n==1) return 1; 
        vector<int> nums = primes;
        int n_len = nums.size(); 
        vector<int> ugly = primes;
        ugly.push_back(1);
        sort(ugly.begin(), ugly.end());
        unordered_map<int, int> umap;
        for(int i=1; i<= n_len; i++) umap[ugly[i]]= 1;  
        int len=ugly.size();;
        long long int tmp;
        int umax = INT_MAX;
        unordered_map<int, int>::iterator it;
        int m =2;
        for(int k=0; k<m; k++){
            for(int i=1; i<len;i++){
                for(int j=0; j<n_len; j++){
                    tmp = ((long long int)ugly[i]*(long long int)nums[j]);
                    if(tmp<umax && tmp>ugly[i] && tmp>ugly[j]){
                        it = umap.find(tmp);
                        if(it == umap.end()){
                            int z = 0;
                            len = ugly.size();  
                            while(z< len && ugly[z]<tmp) z++;
                            ugly.insert(ugly.begin()+z, tmp);
                            umap[tmp]=1;
                        }      
                    }                
                } 
                len = ugly.size();           
                if(len > n){
                    ugly.resize(n);
                    umax = ugly[n-1];
                } 
            }
        }
        return ugly[n-1];
    }
};

// This solution better (much faster and more concise) than first one. But still too slow.  I just repurposed original ugly numbers ii solution for this one.  