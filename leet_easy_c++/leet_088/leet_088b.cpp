class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return; 
        if(m==0){
            nums1 = nums2;
            return;
        }
        for(int i=m-1, j=n-1, k=m+n-1; j>=0; k--){
            if(*(nums2.begin()+j) >= *(nums1.begin()+i)){
                *(nums1.begin()+k) = *(nums2.begin()+j);
                j--;
            }
            else{
                *(nums1.begin()+k) = *(nums1.begin()+i);
                i--;
            }
            if(i<0){
                k--;
                for(; j>=0;j--,k--)
                    *(nums1.begin()+k) = *(nums2.begin()+j);
                return;
            }
        }    
    }
};

//much faster now