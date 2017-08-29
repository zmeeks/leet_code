class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if(len < 2) return s;
        int tmp_i, tmp_j, ind, cnt, max_pal = 0;
        bool overlap;
        for(int i=0; i<len-max_pal; i++){
            for(int j=len-1; j>=max_pal;j--){
                tmp_i = i;
                tmp_j = j;
                cnt=0;
                overlap = false;
                while(i<len && j<len && s[i]==s[j]){
                    i++;
                    j--;
                    cnt++;
                    if(j == tmp_i) overlap = true;
                }
                if(overlap && cnt>max_pal){
                    max_pal = cnt;
                    ind = tmp_i;
                } 
                i=tmp_i;
                j=tmp_j;
            }
        }
        if(max_pal == 0) return s.substr(0,1);
        else return s.substr(ind,max_pal);
    } 
};

// note: this solution is only slightly faster