class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int num, max1, max2, max3=INT_MAX, len = nums.size();
        for(int i=0; i<len; i++) max3 = min(max3, nums[i]);
        max1 = max2 = max3;
        for(int i=0; i<len; i++){
            num = nums[i];
            if(num == max1 || num == max2 || num == max3){
                //do nothing
            }
            else if(num>max1){
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if(num>max2){
                max3 = max2;
                max2 = num;
            }
            else if(num>max3){
                max3 = num;
            }
        }
        if(max3 == max2) return max1;
        else return max3;
    }
};