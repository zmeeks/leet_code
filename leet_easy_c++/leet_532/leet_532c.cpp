class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        int num, cnt = 0, len=nums.size();
        unordered_map<int, int> umap;
        if(k==0){
            for(int i=0; i<len; i++){
                num = nums[i];
                umap[num]++;
                if(umap[num] == 2) cnt++;
            } 
            return cnt;
        }
        for(int i=0; i<len; i++){
            num = nums[i];
            if(!umap.count(num)){
                if(umap.count(num - k)) cnt++;
                if(umap.count(num + k)) cnt++;
                umap[num] = 1;
            }
        }
        return cnt;
    }
};