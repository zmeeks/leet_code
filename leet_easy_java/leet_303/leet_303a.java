class NumArray {
public:
    NumArray(vector<int> nums) {
        int len = nums.size();
        vec.resize(len,0);
        if(len>0) vec[0] = nums[0];       
        for(int i=1; i<len; i++) *(vec.begin()+i) = *(vec.begin()+i-1) + *(nums.begin()+i);
    }
    
    int sumRange(int i, int j) {
        if(i==0) return *(vec.begin()+j);
        return *(vec.begin()+j) - *(vec.begin()+i-1);
    }
private:
    vector<int> vec;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */