class Solution {
public:
    int numTrees(int n) {
        vector<int> vec(n+1,1);
        int sum;
        for(int i=2; i<=n; i++){
            sum = 0;
            for(int j = i-1; j>=0; j--)
                sum+= vec[j] * vec[i - j - 1];
            vec[i] = sum;
        }
        return vec[n];
    }
};