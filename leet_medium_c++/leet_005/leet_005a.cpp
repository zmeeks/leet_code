class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if(len < 2) return s;
        string r = s;
        reverse(r.begin(), r.end());
        int tmp_i, tmp_j, ind, cnt, max_pal = 0;
        bool overlap;
        for(int i=0; i<len-max_pal; i++){
            for(int j=0; j<len-max_pal;j++){
                tmp_i = i;
                tmp_j = j;
                cnt=0;
                overlap = false;
                while(i<len && j<len && s[i]==r[j]){
                    i++;
                    j++;
                    cnt++;
                    if(len - 1 - j == tmp_i) overlap = true;
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

// NOTE: string itterators in while loop performed worse than random access [] ops