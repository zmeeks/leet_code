class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        int k = 1, m = n-1;
        for(int i=0; i<m; i++)
            k = cnt_num(k);
        return to_string(k);
    }

private:
    int cnt_num(int k){
        string s = to_string(k);
        int tmp, check, ans= 0, cnt = 1, len = s.size();
        char c = *(s.begin());
        tmp = c - '0';
        for(int i=1; i<len; i++){            
            c = *(s.begin()+i);
            check = c - '0';
            if(tmp == check)
                cnt++;
            else{
                ans= (ans*10 + cnt)*10 + tmp;
                tmp = check;
                cnt = 1;
            }
        }
        if(len == 1) return 10 + tmp;
        else{
            ans= (ans*10 + cnt)*10 + tmp;
            return ans;
        }
    }
};

// NOTE: this solution doesn't work for numbers above INT_MAX