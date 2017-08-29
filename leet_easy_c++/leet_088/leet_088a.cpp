class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return; 
        if(m==0){
            nums1 = nums2;
            return;
        }
        for(int i=m-1, j=n-1, k=m+n-1; k>=0; k--){
            if(nums2[j]>=nums1[i]){
                nums1[k]=nums2[j];
                j--;
            }
            else{
                nums1[k]=nums1[i];
                i--;
            }
            if(j<0) return;
            if(i<0){
                k--;
                for(; j>=0;j--,k--)
                    nums1[k]=nums2[j];
            return;
            }
        }    
    }
};

// correct and simple implementation!