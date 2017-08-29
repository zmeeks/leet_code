class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos = m+n-1, mm = m-1, nn = n-1;
        while(pos>=0){
            if(mm>=0 && (nn<0 || nums1[mm] >= nums2[nn])) nums1[pos--]=nums1[mm--];
            else nums1[pos--]=nums2[nn--];
        }
    }
};