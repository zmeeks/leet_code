// NOTE : the leet_251a.cpp file is the better/harder of these two.  But I did a first.  If I were to redo a, I would introduce the 
// exists_next function and go_to_next function as seen here in this solution

class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d) {
        big_sz = vec2d.size();
        if(big_sz == 0) no_next = true;
        else{ 
            no_next = false;
            big_iter = 0;
            lil_iter = 0;
            lil_sz = vec2d[0].size();
            v2 = vec2d;
            if(lil_sz == 0) existsNext();
        }
    }

    int next() {
        if(this->lil_iter == this->lil_sz) go_to_next();
        return this->v2[big_iter][lil_iter++];
    }
    
    bool hasNext() {
        if(this->no_next == true) return false;
        if(this->lil_iter == this->lil_sz) existsNext();
        if(this->no_next == true) return false;
        else return true;       
    }
    
private:
    int big_iter;
    int big_sz;
    int lil_iter;
    int lil_sz;
    bool no_next;
    vector<vector<int>> v2;
    
    void existsNext(){
        int i = 0;
        int temp_sz = 0;    // note: either lil_sz == 0 or lil_sz == lil_iter, so
                            // this doesn't need to be initialized officially here      
        this->no_next = true;     
        while(this->big_iter + i < this->big_sz && (this->lil_sz == this->lil_iter || temp_sz == 0) && this->no_next){
            i++;
            if(this->big_iter + i < this->big_sz){
                temp_sz = this->v2[big_iter + i].size();
                if(temp_sz != 0)  this->no_next = false;
            }
        }
    }
    
    void go_to_next(){
        bool dont_stop = true;
        int i = 0;
        int temp_sz = 0;    // note: either lil_sz == 0 or lil_sz == lil_iter, so 
                            // this doesn't need to be initialized officially here
        while(this->big_iter + i < this->big_sz && (this->lil_sz == this->lil_iter || temp_sz == 0) && dont_stop){
            i++;
            temp_sz = this->v2[big_iter + i].size();
            if(this->big_iter + i < this->big_sz && temp_sz != 0) dont_stop = false;
        }
        this->big_iter = this->big_iter + i;
        this->lil_iter = 0;
        this->lil_sz = this->v2[big_iter].size();
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */