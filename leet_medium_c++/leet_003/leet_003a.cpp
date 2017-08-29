class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int w0 = 0;
        int w1 = 0;
        int k0 = 0;
        int k1 = 0;
        k1 = s.size();
        for(int i = 0; i<(s.size()-1); i++){  
            for(int j = i+1; j< k1; j++){
                if(s[i]==s[j]){
                    k1 =j;
                    if(k1 - k0 <= max)
                        i = k1;    
                }
            }
            if(i==k1-1){
                if(k1 - k0 > max){
                    w0 = k0;
                    w1 = k1;
                    max = w1 - w0;
                }else
                    i = k0;
                k1 = s.size();
                k0 = i+1;
            }
        }
           return max;
    }
};

/* note: exceeded computation time -- but this worked on independent test cases 
-- between O(n^2) and O(n^3)  */