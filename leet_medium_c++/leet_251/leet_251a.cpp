class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d) {
        if(vec2d.size()==0) is_empty = true;
        else{ 
            is_empty = false;
            big_iter = vec2d.begin();
            lil_iter = vec2d.begin()->begin();
            lil_end = vec2d.begin()->end();
            is_end = vec2d.end();
            int i = 0;
            lil_big_next = true;
            if(lil_iter == lil_end){
                lil_big_next = false;
                int i = 0;
                while(lil_big_next == false && (big_iter)+i != is_end){
                    i++;
                    if((big_iter)+i != is_end && ((big_iter)+i)->begin() != ((big_iter)+i)->end()) lil_big_next = true;
                }
            }
        }
    }

    int next() {
        if(this->lil_iter != this->lil_end){
            if(this->lil_iter+1 == this->lil_end){
                this->lil_big_next = false;
                int i = 0;
                while(this->lil_big_next == false && (this->big_iter)+i != this->is_end){
                    i++;
                    if((this->big_iter)+i != this->is_end && ((this->big_iter)+i)->begin() != ((this->big_iter)+i)->end()) this->lil_big_next = true;
                }
            }
            return *(this->lil_iter++);
        }
        else{
            this->lil_big_next = false;
            int i = 0;
            while(lil_big_next == false && (this->big_iter)+i != this->is_end){
                i++;
                if((this->big_iter)+i != this->is_end && ((this->big_iter)+i)->begin() != ((this->big_iter)+i)->end()) this->lil_big_next = true;
            }
            this->big_iter=this->big_iter+i;
            this->lil_iter = this->big_iter->begin();
            this->lil_end = this->big_iter->end();
            if(this->lil_iter+1 == this->lil_end){
                this->lil_big_next = false;
                i = 0;
                while(this->lil_big_next == false && (this->big_iter)+i != this->is_end){
                    i++;
                    if((this->big_iter)+i != this->is_end && ((this->big_iter)+i)->begin() != ((this->big_iter)+i)->end()) this->lil_big_next = true;
                }
            }
            return *(this->lil_iter++);
        }
    }

    bool hasNext() {
        if(this->is_empty == true || lil_big_next == false) return false;
        if(this->lil_iter != this->lil_end) return true;
        else if(((this->big_iter)+1) != this->is_end && this->lil_big_next) return true;
        else return false;
    }
private:
    vector<vector<int>>::iterator big_iter;
    vector<vector<int>>::iterator is_end;
    vector<int>::iterator lil_iter;
    vector<int>::iterator lil_end;
    bool lil_big_next;
    bool is_empty;
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */