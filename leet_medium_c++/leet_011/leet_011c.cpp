class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int max_A=0;
        int h = min(height[j],height[i]);
        while(i < j){
            int h = min(height[j],height[i]);
            max_A = max(max_A,(j-i)*h);
            while(height[j] <= h && i<j) j--;
            while(height[i] <= h && i<j) i++;
        } 
        return max_A;
    }
};