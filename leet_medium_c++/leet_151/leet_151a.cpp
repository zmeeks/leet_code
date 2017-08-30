class Solution {
public:
    void reverseWords(string &s) {
        int len = s.size();
        if(len == 0) return;
        int k, i=0, j=len-1;
        while(*(s.begin()+j) == ' ') j--;
        while(*(s.begin()+i) == ' ') i++;
        string str = "";
        if(i == j){
            s = s.substr(i, 1);
            return;
        }
        int cnt = 0;
        for(k=j; k>=i;){
            if(*(s.begin()+k) == ' '){
                if(cnt > 0)
                    str += " ";
                str += s.substr(k+1, j-k);
                cout<<"j = "<<j<<", k = "<<k<<endl;
                j = k-1;
                while(*(s.begin()+j) == ' ') j--;
                k=j-1;
                cout<<"j = "<<j<<", k = "<<k<<endl;
                cnt++;
            }
            else
                k--;
        }
        if(k<=i){
            if(cnt > 0)
                    str += " ";
            str += s.substr(i, j-k);
        }
        s=str;
    }
};