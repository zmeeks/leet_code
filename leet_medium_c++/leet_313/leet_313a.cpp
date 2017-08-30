// NOTE: This solution wastes too much time (i.e. exceeds time limit). Nevertheless it is correct.

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int len = primes.size();
        if(len == 0) return 0;
        if(n == 1) return 1;
        int p_max;
        double test = pow(primes[0], n-1);
        if(log(test) <= 30 && test != HUGE_VAL && int(test)>0)
            p_max = pow(primes[0], n-1);
        else
            p_max = INT_MAX;
        if(len == 1) return p_max;
        primez = primes;
        rec_fun(0,0,primez,p_max,len,n);
        primez.push_back(1);
        sort(primez.begin(),primez.end());
        unique(primez.begin(),primez.end());
        len = primez.size();
        return primez[n-1];
    }
    
    void rec_fun(int i, int j, vector<int>& prmz, int pmax, int olen, int N){
        int num = prmz[i]*prmz[j];
        int len = prmz.size();
        if(num < pmax && num != 0){
            int k=0;
            while(k<len && prmz[k]<num) k++;
            if(k<len) {
                if(prmz[k]>num){
                    prmz.insert(prmz.begin()+k, num);
                }            
            }
            else
                prmz.push_back(num);
        }
        if(len>N){
            pmax = prmz[N];
            prmz.resize(N);
            len = prmz.size();
        }
        
        if(j+1<olen)
            rec_fun(i,j+1,prmz,pmax,olen,N);
        
        if(len>N){
            pmax = prmz[N];
            prmz.resize(N);
            len = prmz.size();
        }
        
        if(i+1<len){
            rec_fun(i+1,j,prmz,pmax,olen,N);
        }
    }
 
private:
    vector<int> primez;
    
};
