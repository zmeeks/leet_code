class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int max_A = (j-i)*min(height[j],height[i]);
        while(i < j){
            while(i < j){
                if((j-i)*min(height[j],height[i]) > max_A) max_A = (j-i)*min(height[j],height[i]);
                i++;
            } 
            i=0;
            j--; 
        } 
        return max_A;
    }
};