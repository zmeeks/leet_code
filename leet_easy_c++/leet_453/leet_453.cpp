class Solution {
public:
    int minMoves(vector<int>& nums) {
        int alpha=INT_MAX, sum=0, len=nums.size();
        for(int i=0; i<len; i++) alpha = min(alpha, *(nums.begin()+i));
        for(int i=0; i<len; i++) sum+= *(nums.begin()+i) - alpha;
        return sum;
    }
};