class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int zigs = 2*numRows - 2;
        int len = s.size();
        char * zigzag = new char[len];
        int jz;
        int cnt = 0;
        for(int i=0; i<numRows; i++){
            for(int j=0; j< len; j++){
                jz = j%zigs;
                if(jz == 0 && jz == i)
                    zigzag[cnt++] = s[j];
                else if(jz == numRows - 1 && jz == i)
                    zigzag[cnt++] = s[j];
                else if(jz == i && jz + 1 < numRows)
                    zigzag[cnt++] = s[j];
                else if(jz + 1 > numRows && i == 2*numRows - 2 - jz)
                    zigzag[cnt++] = s[j];
            }
        }
        string zigzag_str(zigzag, len);
        return zigzag_str;
    }
};