class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int> umap;
        queue<string> q;
        for(auto w : wordDict) umap[w] = 1;
        q.emplace(s);
        int len;
        while(!q.empty()){
            len = q.front().size();
            for(int i=1; i<= len; i++){
                if(umap.count(q.front().substr(0,i))){
                    if(i == len) 
                        return true;
                    else{
                        for(int j=len-1; j>=i; j--){
                            if(umap.count(q.front().substr(j,len - j))){
                                if(j==i) 
                                    return true;
                                else
                                    q.emplace(q.front().substr(i,j - i));
                            }
                        }    
                    } 
                }
            }
            q.pop();
        }
        return false;
    }
};
              
// performs better than previous sol, but still exceeding time limit.  this sol uses bfs, only adding solutions to the queue that have a front and back substring