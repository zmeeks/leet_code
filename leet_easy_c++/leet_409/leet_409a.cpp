class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> umap;
        int k, cnt=0, len=s.size();
        for(int i=0; i<len; i++){
            k = ++umap[s[i]-'a'];
            if(k%2==0) cnt+=2;
        }
        for(auto it=umap.begin(); it != umap.end(); it++){
            if(it->second %2 == 1){
                cnt++;
                break;
            }
        }
        return cnt;
    }
};