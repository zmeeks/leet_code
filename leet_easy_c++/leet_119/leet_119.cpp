class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec = {1};
        vector<int> tmp;
        int cnt = 0;
        for(int i=0; i<rowIndex ; i++){
            tmp = vec;
            vec.emplace(vec.begin(),0);
            for(int j=0; j<=i; j++)
                vec[j]+=tmp[j];
        }
        return vec;
    }
};