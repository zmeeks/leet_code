class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int num, i=0, j=numbers.size()-1;
        vector<int> vec(2);
        while(i<j){
            num = numbers[i]+numbers[j];
            if(num == target){
                vec[0] = i+1;
                vec[1] = j+1;
                return vec;
            }
            else if(num > target) j--;
            else i++;
        }
    }
};