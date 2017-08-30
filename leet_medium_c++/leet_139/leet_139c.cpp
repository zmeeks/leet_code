class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int> umap;
        queue<int> q;
        int pos, len = s.size();
        vector<int> vec(len, 0);
        for(auto w : wordDict) umap[w] = 1;
        q.emplace(0);
        while(!q.empty()){
            pos = q.front();
            q.pop();
            if(vec[pos] == 0){
                vec[pos] = 1;
                for(int i = 1; i+pos<=len; i++){
                    if(umap.count(s.substr(pos,i))){
                        if(pos + i == len) return true;
                        q.emplace(pos+i);
                    }
                }
            }  
        }
        return false;
    }
};
