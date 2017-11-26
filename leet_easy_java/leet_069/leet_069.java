class Solution {
    public int mySqrt(int x) {
        return (int)mySqrt(0, x, x);
    }
    private double mySqrt(double l, double r, int target){
        double m = (l+r)/2.0, m2 = m*m;
        if(m2 < target - .000001) return mySqrt(m, r, target);
        else if(m2 > target + .000001) return mySqrt(l, m, target);
        else return m + .000001;
    }
}