class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int> greed;
        priority_queue<int> cookies;
        int cnt = 0, len_g = g.size(), len_s = s.size();
        for(int i=0; i<len_g; i++) greed.emplace(g[i]);
        for(int i=0; i<len_s; i++) cookies.emplace(s[i]);
        while(!greed.empty() && !cookies.empty()){
            if(greed.top() <= cookies.top()){
                cnt++;
                cookies.pop();
            }
            greed.pop();
        }
        return cnt;
    }
};

//this beats over 99% of other leetcode solutions