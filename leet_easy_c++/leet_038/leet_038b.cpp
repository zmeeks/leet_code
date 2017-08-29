class Solution {
public:
    string countAndSay(int n) {
        string k = "1";
        for(int i=1; i<n; i++)
            k = cnt_num(k);
        return k;
    }

private:
    string cnt_num(string& k){
        int tmp, check, ans = 0, cnt = 1, len = k.size();
        tmp = *(k.begin()) - '0';
        if(len == 1) return to_string(10 + tmp);
        string ret = "";
        for(int i=1; i<len; i++){            
            check = *(k.begin()+i) - '0';
            if(tmp == check)
                cnt++;
            else{
                ans= cnt*10 + tmp;
                ret = ret + to_string(ans);
                tmp = check;
                cnt = 1;
            }
        }
        ans= cnt*10 + tmp;
        ret = ret + to_string(ans);
        return ret;
    }
};