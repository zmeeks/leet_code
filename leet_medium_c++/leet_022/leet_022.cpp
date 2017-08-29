class Solution {
public:
    vector<string> generateParenthesis(int n) {
        cur.resize(n*2);
        if(n==0) return pars;
        gph(n,n,0);
        return pars;
    }
    
private:
    void gph(int left, int right, int pos){     /* gph = generate parenthesis helper */
        if(left == 0 && right == 0){
            pars.emplace_back(cur);
        } 
        if(right<left) return;
        if(left != 0){
            cur[pos] = '(';
            gph(left-1,right,pos+1);
        }
        cur[pos] = ')';
        gph(left, right-1,pos+1);
    }
    
    vector<string> pars;
    string cur;
};
