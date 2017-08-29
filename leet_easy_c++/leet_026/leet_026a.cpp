class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ns = nums.size();
        int cur_num;
        if(ns==0) return 0;
        int last = nums[0];
        int itr = 0;
        for(int cur=1; cur< ns; cur++){
            cur_num = nums[cur];
            if(cur_num!=last){
                itr++;
                nums[itr] = cur_num;
                last = cur_num;
            }    
        }
        return ++itr;
    }
};