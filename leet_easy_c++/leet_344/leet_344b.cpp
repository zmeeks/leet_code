class Solution {
public:
    string reverseString(string s) {
        int tmp, end = s.size();
        char * c = new char[end+1]; //to handle the introduced null termination character
        strcpy(c,s.c_str());
        for(int i=0; i<(--end); i++){
            tmp = c[i];
            c[i] = c[end];
            c[end] = tmp;
        }
        string sc(c);
        delete[] c;
        return sc;
    }
};