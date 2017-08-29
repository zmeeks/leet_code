class MovingAverage {
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        iter = 0;
        w = size;
        flag = 0;
    }
    
    double next(int val) {
        if(flag == 0){
            vec.emplace_back(val);
            if(vec.size() == w) flag = 1;
            return accumulate(vec.begin(),vec.end(), 0)/((double)vec.size());    
        }
        else{
            vec[iter] = val;
            iter = (iter + 1) % w;
            return accumulate(vec.begin(),vec.end(), 0)/((double)w);    
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