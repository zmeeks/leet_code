// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int is_bad, r = n, l = 1, m = ceil(l+(r-l)/2);
        while(l<r){
            if(isBadVersion(m)) r=m;
            else l=m+1;
            m = ceil(l+(r-l)/2);
        }
        return l;
    }
};

// much faster than prev version.  the left case isn't an issue as already have log(n) guarantee.  the left case increases the time complexity by a constant factor