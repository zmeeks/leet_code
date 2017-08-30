class Solution {
public:
    void reverseWords(string &s) {
        int len=s.size();
        if(len == 0) return;
        reverse(s.begin(), s.end());
        int j=0;
        for(int i=0; i<len; i++){
            if(s[i]==' '){
                j=i+1;
                while(j<len && s[j]==' ') j++;
                if(j>i+1) s.erase(i+1, j-i-1);
                len = s.size();
            }
        }
        if(s[len-1]==' ') s.erase(len-1,1);
        if(s[0]==' ') s.erase(0,1);
        len = s.size();
        j=0;
        for(int i=0; i<len; i++){
            if(s[i]==' '){
                reverse(s.begin()+j, s.begin()+i);
                j=i+1;
            } 
        }
        reverse(s.begin()+j, s.end());
    }
};