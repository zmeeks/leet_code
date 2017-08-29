class Solution {class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> umap;
        int cnt=0, len=s.size();
        for(int i=0; i<len; i++) if((++umap[s[i]])%2==0) cnt+=2;
        return (cnt < len ? cnt+1 : cnt);
    }
};