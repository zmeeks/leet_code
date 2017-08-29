class NumArray {
public:
    NumArray(vector<int> nums) {
        len = nums.size();
        num_ary = new int[len*len];
        for(int i=0; i<len; i++) num_ary[i*len + i] = nums[i];
        for(int i=0; i<len-1; i++)
            for(int j=i+1; j<len; j++)
                num_ary[i*len + j] = nums[j] + num_ary[i*len + j-1];
    }
    
    int sumRange(int i, int j) {
        if(i > j){
            int tmp = i;
            i = j;
            j = tmp;
        }
        return num_ary[i*len + j];
    }
private:
    int* num_ary;
    int len;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */