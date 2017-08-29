class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        int len_h = haystack.size(), len_n = needle.size();
        int i=0, j, tmp;
        while(i<len_h){
            j=0;
            tmp = i;
            while(*(haystack.begin()+i) == *(needle.begin()+j)){
                i++;
                j++;
                if(j==len_n) return i - j;
                if(i>=len_h) return -1;
            }
            i=tmp;
            i++;
        }
        return -1;
    }
};