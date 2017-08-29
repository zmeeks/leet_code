class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int len = nums.size();
        int check, targ = len/2;
        for(int i=0; i<len; i++){
            check = umap[*(nums.begin() + i)]++;
            if(check == targ) return *(nums.begin()+i);
        }
    }
};