class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size(), cur = len-1;
        if(len == 0) return (vector<int>){1};
        digits[cur]++;
        for(;cur >= 0 && digits[cur]==10; cur--){
            digits[cur]=0;
            if(cur>0) digits[cur-1]++;
            else{
                digits.emplace_back(0);
                digits[0]=1;
            }
        }
        return digits;
    }
};