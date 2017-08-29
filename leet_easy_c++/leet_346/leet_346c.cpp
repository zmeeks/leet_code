class MovingAverage {
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        vec.reserve(size);
        iter = 0;
        w = size;
        flag = 0;
        sum = 0;
    }
    
    double next(int val) {
        if(flag == 0){
            vec[iter]=val;
            iter = (iter + 1) % w;
            sum+=val;
            if(iter == 0){
                flag = 1;
                return (double)sum/w;    
            } 
            return (double)sum/iter;    
        }
        else{            
            sum-=vec[iter];
            vec[iter] = val;
            iter = (iter + 1) % w;
            sum+=val;
            return (double)sum/w;    
        }
    }
    
private:
    vector<int> vec;
    int iter, w, flag, sum;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */