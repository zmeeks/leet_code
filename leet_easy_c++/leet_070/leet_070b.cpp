class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int * dp_array = new int[n+1];
        dp_array[1]=1;
        dp_array[2]=2;
        for(int i=3; i<=n; i++) dp_array[i]=dp_array[i-1]+dp_array[i-2];
        int answer = dp_array[n];   // ~
        delete dp_array;            // ~
        return answer;              // ~
        //return dp_array[n];       // *
    }
};
// note: to get faster time (but not as correct) switch ~ with * for lines that are commented out