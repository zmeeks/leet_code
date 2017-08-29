class NumArray {
public:
    NumArray(vector<int> nums) {
        vec.insert(vec.begin(),nums.begin(),nums.end());
        int len = nums.size();
        for(int i=1; i<len; i++) *(vec.begin()+i) += *(vec.begin()+i-1);
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