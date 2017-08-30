class ZigzagIterator {
public:
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        v = 2;
        vec_iter = 0;
        loc_iter = 0;
        lens.emplace_back(v1.size());
        lens.emplace_back(v2.size());
        max_len = max(lens[0], lens[1]);
        vecs.emplace_back(v1);
        vecs.emplace_back(v2);
        while(lens[vec_iter] <= loc_iter){
            vec_iter++;
            if(vec_iter == v){
                vec_iter = 0;
                loc_iter++;
            } 
            if(loc_iter==max_len) break;
        }
    }

    int next() { 
        int ret;
        if(lens[vec_iter] > loc_iter){
            ret = vecs[vec_iter][loc_iter];
        }
        vec_iter++;
        if(vec_iter == v){
            vec_iter = 0;
            loc_iter++;
        } 
        while(lens[vec_iter] <= loc_iter){
            vec_iter++;
            if(vec_iter == v){
                vec_iter = 0;
                loc_iter++;
            } 
            if(loc_iter==max_len) break;
        } 
        return ret;
    }

    bool hasNext() {
        if(loc_iter<max_len) return true;
        else return false;
    }
private:
    int v;
    int vec_iter;
    int loc_iter;
    vector<int> lens;
    int max_len;
    vector<vector<int> > vecs;
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */

// this version modularizeable to handle k > 2.  NOTE: this solution is amongst the fastest yet submitted