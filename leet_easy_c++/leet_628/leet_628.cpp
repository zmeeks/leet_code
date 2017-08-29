class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ret, p1, p2, max1=INT_MIN, max2=INT_MIN, max3=INT_MIN, min1=INT_MAX, min2=INT_MAX, len=nums.size();
        for(int i=0; i<len; i++){
            ret = nums[i];
            if(ret > max1){
                max3 = max2;
                max2 = max1;
                max1 = ret;
            }
            else if(ret > max2){
                max3 = max2;
                max2 = ret;
            }
            else if(ret > max3){
                max3 = ret;
            }
            if(ret < min1){
                min2 = min1;
                min1 = ret;
            }
            else if(ret < min2){
                min2 = ret;
            }
        }
        p1 = max1*max2*max3;
        p2 = max1*min1*min2;
        ret = max(p1, p2);
        return ret;
    }
};
