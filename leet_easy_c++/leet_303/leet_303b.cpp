class NumArray {
public:
    NumArray(vector<int> nums) {
        vec.emplace_back(0);
        vec.insert(vec.end(),nums.begin(),nums.end());
        int len = vec.size();
        for(int i=1; i<len; i++) *(vec.begin()+i) += *(vec.begin()+i-1);
    }
    
    int sumRange(int i, int j) {
        return vec[j+1] - vec[i];
    }
private:
    vector<int> vec;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */