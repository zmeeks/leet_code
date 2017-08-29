class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<vector<char>> zigzag(numRows);
        int cnt = 0, iter = 0;
        int len = s.size(); 
        while(cnt < len){
            while(cnt < len && iter < numRows - 1) zigzag[iter++].push_back(s[cnt++]);
            while(cnt < len && iter > 0) zigzag[iter--].push_back(s[cnt++]);
        }
        string ans = "";
        for(int i=0; i<numRows; i++){
            len = zigzag[i].size();
            string temp(zigzag[i].begin(), zigzag[i].begin() + len);
            ans += temp;
        }
        return ans;
    }
};