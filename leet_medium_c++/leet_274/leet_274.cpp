class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), [](int a, int b){ return a>b;});
        int res=0, len = citations.size();
        for(int i= 0; i<len && citations[i]>=(i+1); i++) res = i+1;
        return res;
    }
};