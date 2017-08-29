class Solution {
public:
    
    Solution(){
        letters.emplace_back((vector<char>){'a','b','c'});
        letters.emplace_back((vector<char>){'d','e','f'});
        letters.emplace_back((vector<char>){'g','h','i'});
        letters.emplace_back((vector<char>){'j','k','l'});
        letters.emplace_back((vector<char>){'m','n','o'});
        letters.emplace_back((vector<char>){'p','q','r','s'});
        letters.emplace_back((vector<char>){'t','u','v'});
        letters.emplace_back((vector<char>){'w','x','y','z'});
        letters.emplace_back((vector<char>){' '});
    }
    
    vector<string> letterCombinations(string digits) {
        int len = digits.size();
        if(len == 0) return sol;
        int cnt = 0, k = vec_chooser(digits.back());
        digits.pop_back();
        if(k==9) return letterCombinations(digits);
        len = letters[k].size();
        int sol_len = sol.size(), v_len = sol.size();
        if(sol_len == 0){
            sol.emplace_back("");
            v_len = 1;
        }
        vector<string> rep = sol;
        for(int i=0; i<len-1; i++) sol.insert(sol.end(), rep.begin(), rep.end());
        sol_len = sol.size();
        int j = 0, v = 0;
        while(cnt < sol_len){
            if(j==v_len){
                j = 0;
                v++;
            } 
            sol[cnt]=letters[k][v]+sol[cnt];
            j++;
            cnt++;
        }
        return letterCombinations(digits);
    }
    
    int vec_chooser(char c){    //in case 1, *, or # are used
        switch(c){
            case '2': return 0;
            case '3': return 1;
            case '4': return 2;
            case '5': return 3;
            case '6': return 4;
            case '7': return 5;
            case '8': return 6;
            case '9': return 7;
            case '0': return 8;
            default: return 9;
        }
    }
private:
    vector<vector<char>> letters;
    vector<string> sol;
};