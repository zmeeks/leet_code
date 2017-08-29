class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        int time, cnt = 0;
        vector<string> ans;
    for(int i=0; i< 12; i++){
        for(int j=0; j<60; j++){
            bitset<10> bits(0);
            bits = (i<<6 | j);
            if(bits.count() == num){
                string k = to_string(i) + ":" + (j < 10 ? "0" + to_string(j) : to_string(j));
                ans.push_back(k);
            }
        }
    }
        return ans;
    }     
};
