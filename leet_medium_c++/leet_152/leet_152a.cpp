class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int ans, zeros = 0;
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        for(int i=0; i<len; i++) if(nums[i] == 0) zeros++;
        if(zeros==0)
            ans = max_sub_sans_zeros(nums);
        else 
            ans = zero_shifter(nums);
        return ans;
    }
    
    int max_sub_sans_zeros(vector<int> nums){
        int negs = 0, zeros = 0, len = nums.size();
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        for(int i=0; i<len; i++) if(nums[i] < 0) negs++;
        for(int i=0; i<len; i++) if(nums[i] == 0) zeros++;
        int prod1 = 1, prod2 = 1, prod3 = 1;
        if(negs%2==0 && zeros == 0){
            for(int i=0; i<len; i++) 
                prod1 *= nums[i];
            return prod1;
        }
        if(negs%2==1 && zeros == 0){
            int i;
            for(i=0; i<len && nums[i]>0; i++) 
                prod1 *= nums[i];
            for(i=i+1; i<len; i++) 
                prod2 *= nums[i];
            prod1 = max(prod1, prod2);
            prod2 = 1;
            for(i=i-1; i>=0 && nums[i]>0; i--) 
                prod2 *= nums[i];
            for(i=i-1; i>=0; i--) 
                prod3 *= nums[i];
            prod2 = max(prod2, prod3);
            prod1 = max(prod1, prod2);
            return prod1;    
        }
        for(int i=1; i<len; i++)
            nums[i] = max(nums[i]*nums[i-1], nums[i]);
        prod2 = nums[0];
        for(int i=1; i<len; i++) 
            if(nums[i]>prod2) 
                prod2 = nums[i];
        return prod2;
    }
    
    int zero_shifter(vector<int> nums){
        int prod1=0;
        int k=0, i;
        int len = nums.size();
        for(i=0; i<len; i++){
            if(nums[i]==0){
                vector<int> num2(nums.begin()+k,nums.begin()+i);
                k=i+1;
                prod1 = max(prod1, max_sub_sans_zeros(num2)); 
            }
        }
        if(k!=i){
            vector<int> num2(nums.begin()+k,nums.begin()+i);
            prod1 = max(prod1, max_sub_sans_zeros(num2)); 
        }
        return prod1;
    }
};