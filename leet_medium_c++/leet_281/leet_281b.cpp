class ZigzagIterator {
public:
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        int i = 0, len1 = v1.size(), len2 = v2.size(), len_max = max(len1,len2);
        while(i < len_max){
            if(i<len1) q.emplace(*(v1.begin()+i));
            if(i<len2) q.emplace(*(v2.begin()+i));
            i++;
        }
    }

    int next() { 
        int n = q.front();
        q.pop();
        return n;
    }

    bool hasNext() {
        if(q.empty()) return false;
        else return true;
    }
private:
    queue<int> q;
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */

// this solution only nominally slower (22ms vs 19ms) than prev solution, but MUCH MUCH simpler