class Solution {
public:
    string countAndSay(int n) {
        string k = "1";
        for(int i=1; i<n; i++)
            cnt_num(k);
        return k;
    }

private:
    void cnt_num(string& k){
        int tmp, check, ans = 0, cnt = 1, len = k.size();
        tmp = *(k.begin()) - '0';
        if(len == 1){
            k = to_string(10 + tmp);
            return;
        } 
        string ret = "";
        for(int i=1; i<len; i++){            
            check = *(k.begin()+i) - '0';
            if(tmp == check)
                cnt++;
            else{
                ans= cnt*10 + tmp;
                ret += to_string(ans);
                tmp = check;
                cnt = 1;
            }
        }
        ans= cnt*10 + tmp;
        ret += to_string(ans);
        k = ret;
        return;
    }
};

// this solution half the speed as previous solution.  
// because this one uses a void helper function, there are less calls to copy constructor
// note: passing string parameter by reference didn't have any effect since arrays are passed by reference anyways