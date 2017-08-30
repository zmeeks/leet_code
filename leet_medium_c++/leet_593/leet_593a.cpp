class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        double mini, maxi;
        if(p1 == p2 || p1 == p3 || p1 == p4) return false;
        if(p2 == p3 || p2 == p4 || p3 == p4) return false;
        
        mini = min( sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2)), sqrt(pow(p1[0] - p3[0], 2) + pow(p1[1] - p3[1], 2)) );
        mini = min( mini, sqrt(pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2)) );
        maxi = max( sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2)), sqrt(pow(p1[0] - p3[0], 2) + pow(p1[1] - p3[1], 2)) );
        maxi = max( maxi, sqrt(pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2)) );
        //cout<<"maxi = "<<maxi<<", mini = "<<mini<<", and: sqrt(2*pow(mini,2)) ="<<sqrt(2*pow(mini,2))<<endl;
        if((int)(15000*maxi) != (int)(15000*sqrt(2*pow(mini,2)))) return false;
        
        mini = min( sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2)), sqrt(pow(p2[0] - p3[0], 2) + pow(p2[1] - p3[1], 2)) );
        mini = min( mini, sqrt(pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2)) );
        maxi = max( sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2)), sqrt(pow(p2[0] - p3[0], 2) + pow(p2[1] - p3[1], 2)) );
        maxi = max( maxi, sqrt(pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2)) );
        //cout<<"maxi = "<<maxi<<", mini = "<<mini<<", and: sqrt(2*pow(mini,2)) ="<<sqrt(2*pow(mini,2))<<endl;
        if((int)(15000*maxi) != (int)(15000*sqrt(2*pow(mini,2)))) return false;
        
        mini = min( sqrt(pow(p3[0] - p1[0], 2) + pow(p3[1] - p1[1], 2)), sqrt(pow(p2[0] - p3[0], 2) + pow(p2[1] - p3[1], 2)) );
        mini = min( mini, sqrt(pow(p3[0] - p4[0], 2) + pow(p3[1] - p4[1], 2)) );
        maxi = max( sqrt(pow(p3[0] - p1[0], 2) + pow(p3[1] - p1[1], 2)), sqrt(pow(p2[0] - p3[0], 2) + pow(p2[1] - p3[1], 2)) );
        maxi = max( maxi, sqrt(pow(p3[0] - p4[0], 2) + pow(p3[1] - p4[1], 2)) );
        //cout<<"maxi = "<<maxi<<", mini = "<<mini<<", and: sqrt(2*pow(mini,2)) ="<<sqrt(2*pow(mini,2))<<endl;
        if((int)(15000*maxi) != (int)(15000*sqrt(2*pow(mini,2)))) return false;
        
        mini = min( sqrt(pow(p4[0] - p1[0], 2) + pow(p4[1] - p1[1], 2)), sqrt(pow(p4[0] - p3[0], 2) + pow(p4[1] - p3[1], 2)) );
        mini = min( mini, sqrt(pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2)) );
        maxi = max( sqrt(pow(p1[0] - p4[0], 2) + pow(p1[1] - p4[1], 2)), sqrt(pow(p4[0] - p3[0], 2) + pow(p4[1] - p3[1], 2)) );
        maxi = max( maxi, sqrt(pow(p2[0] - p4[0], 2) + pow(p2[1] - p4[1], 2)) );
        //cout<<"maxi = "<<maxi<<", mini = "<<mini<<", and: sqrt(2*pow(mini,2)) ="<<sqrt(2*pow(mini,2))<<endl;
        if((int)(15000*maxi) != (int)(15000*sqrt(2*pow(mini,2)))) return false;
        
        return true;
    }
};