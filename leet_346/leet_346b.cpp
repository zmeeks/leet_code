class MovingAverage {
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        vec.reserve(size);
        iter = 0;
        w = size;
        flag = 0;
    }
    
    double next(int val) {
        int sum = 0;
        if(flag == 0){
            vec[iter]=val;
            iter = (iter + 1) % w;
            if(iter == 0){
                flag = 1;
                for(int i=0; i<w; i++) sum+= vec[i];
                return (double)sum/w;    
            } 
            for(int i=0; i<iter; i++) sum+= vec[i];
            return (double)sum/iter;    
        }
        else{
            vec[iter] = val;
            iter = (iter + 1) % w;
            for(int i=0; i<w; i++) sum+= vec[i];
            return (double)sum/w;    
        }
    }
    
private:
    vector<int> vec;
    int iter, w, flag;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */