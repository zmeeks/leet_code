class Soluclass Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        double mini, maxi;
        if(p1 == p2 || p1 == p3 || p1 == p4) return false;
        if(p2 == p3 || p2 == p4 || p3 == p4) return false;
        vector<vector<int> > pp = {p1, p2, p3, p4, p1, p2, p3};
        
        for(int i=0; i<4; i++){
            mini = min(sqrt(pow(pp[i][0] - pp[i+1][0], 2) + pow(pp[i][1] - pp[i+1][1], 2)), sqrt(pow(pp[i][0] - pp[i+2][0], 2) + pow(pp[i][1] - pp[i+2][1], 2)));
            mini = min( mini, sqrt(pow(pp[i][0] - pp[i+3][0], 2) + pow(pp[i][1] - pp[i+3][1], 2)));
            maxi = max(sqrt(pow(pp[i][0] - pp[i+1][0], 2) + pow(pp[i][1] - pp[i+1][1], 2)), sqrt(pow(pp[i][0] - pp[i+2][0], 2) + pow(pp[i][1] - pp[i+2][1], 2)));
            maxi = max( maxi, sqrt(pow(pp[i][0] - pp[i+3][0], 2) + pow(pp[i][1] - pp[i+3][1], 2)));
            if((int)(16384*maxi) != (int)(16384*sqrt(2*pow(mini,2)))) return false; // 16384 = 2^14
        }
           
        return true;
    }
};