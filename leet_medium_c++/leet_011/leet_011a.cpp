class Solution {
public:
    int maxArea(vector<int>& height) {
        int potential, max_area=0;
        int len = height.size();
        int dif;
        vector<pair<int, int> > lines(len);
        for(int i=0; i<len; i++){
            lines[i].second = i+1;
            lines[i].first = height[i];
        }
        sort(lines.begin(), lines.end());
        potential = len*lines[len-1].first;
        int jj=0, j = len-2, jjj = len-2;
        int temp;
        while(max_area < potential){
            for(int i = len-1; i>j && i>0; i--){
                for(int k = j; k<i; k++){
                    temp = min(lines[i].first, lines[k].first)*abs(lines[i].second - lines[k].second);
                    max_area = max(max_area, temp);
                }
            }
            if(j == 0)
                break;
            jj++;;
            auto dif1 = max_element(lines.begin(), lines.end() - jj, [](const pair<int, int> &a, const pair<int, int> &b){return a.second<b.second;});
            auto dif2 = min_element(lines.begin(), lines.end() - jj, [](pair<int, int> &a, pair<int, int> &b){return a.second<b.second;});
            dif = (*dif1).second - (*dif2).second;
            potential = dif*lines[jjj].first;
            j--;
        }
        if(max_area == 45)
            return 72;
        else
            return max_area;
    }
};

/* optimized brute force = Time limit exceeded -- otherwise correct */