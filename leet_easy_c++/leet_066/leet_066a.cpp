class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int cur = len;
        vector<int> ans(1,1);
        if(len == 0) return ans;
        ans = digits;
        ans[cur-1]++;
        while(cur > 0 && ans[cur-1]==10){
            ans[cur-1]=0;
            if(cur-1>0) ans[cur-2]++;
            else{
                vector<int> ans2(len+1,0);
                ans2[0]=1;
                return ans2;
            }
            cur--;
        }
        return ans;
    }
};