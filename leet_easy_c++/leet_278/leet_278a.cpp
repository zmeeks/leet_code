// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int is_bad, r = n, l = 1, m = ceil((l+r)/2);
        if(n==1) return 1;
        while(l<r){
            if(isBadVersion(l)) return l;
            else if(isBadVersion(m)){
                r=m;
                l++;
            } 
            else l=m+1;
            m = ceil((l+r)/2);
        }
        return m;
    }
};