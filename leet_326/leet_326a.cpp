class Solution {
public:
    bool isPowerOfThree(int n) {
        static stack<long long int> stk;
        static stack<long long int> last;
        static unordered_map<long long int, int> umap;
        if(last.empty()){
            long long int tmp=1, cnt =0;
            umap[1]=1;
            while(tmp<n){
                tmp*=3;
                umap[tmp]=1;
                cnt++;
            }
            last.emplace(cnt);
            stk.emplace(tmp);
        }
        if(stk.top()<n){
            stk.emplace(n);
            long long int tmp=pow(3,last.top()), cnt = last.top();
            while(tmp<n){
                tmp*=3;
                umap[tmp]=1;
                cnt++;
            }
            last.emplace(cnt);
            stk.emplace(tmp);
        } 
        return umap.count(n);
    }
};