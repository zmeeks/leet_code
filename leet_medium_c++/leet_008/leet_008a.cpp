class Solution {
public:
    
    int myAtoi(string str) {
        int len = str.size();
        long long int temp=0;
        if(len == 0) return 0;
        str = clean_str(str);
        len = str.size();
        long long int sgn;
        if(str[0] == '-'){
            if(len == 1) return 0;
            sgn = -1;
            string str2(str.begin()+1, str.end());
            str = str2;
            len--;
        }else if(str[0] == '+'){
            if(len == 1) return 0;
            sgn = 1;
            string str2(str.begin()+1, str.end());
            str = str2;
            len--;
        }
        else{
            sgn = 1;
        }
        long long int dec_spot = 1;
        long long int last;
        for(int i=len-1; i>=0; i--){
            last = temp;
            if(!valid_input(str[i])) return 0;
            temp+= (long long int)letter_num(str[i])*dec_spot;
            dec_spot*=10;
            if(temp<last) overflow = true;
        }
        if(temp*sgn > 2147483647 || overflow) temp = 2147483647;
        if( temp*sgn  < - 2147483648 && sgn == -1) temp = 2147483648;
        if( overflow && sgn == -1) temp = 2147483648;
        return temp*sgn;
    }
private:
    bool overflow = false;
    
    int letter_num(char c){
        switch(c){
            case '0':   return 0;
            case '1':   return 1;
            case '2':   return 2;
            case '3':   return 3;
            case '4':   return 4;
            case '5':   return 5;
            case '6':   return 6;
            case '7':   return 7;
            case '8':   return 8;
            case '9':   return 9;
            default:    return 0;
        }
    }
    
    bool valid_input(char c){
        switch(c){
            case '0':   
            case '1':   
            case '2':   
            case '3':  
            case '4':  
            case '5':   
            case '6':  
            case '7':  
            case '8':  
            case '9':   return true;
                        break;
            default:    return false;
        }
    }
    
    string clean_str(string str){
        int i=0;
        int len = str.size();
        while(i < len && str[i] == ' ') i++;
        if(i>0){
            string str2(str.begin()+i, str.end());
            str = str2;
        }
        len = str.size();
        if(len == 0) return str;
        i = len - 1;
        while(i>=0 && str[i] == ' ') i--;
        if(i<len-1){
            string str2(str.begin(), str.begin() + i + 2);
            str = str2;
        }
        len = str.size();
        if(len == 0) return str;
        if(str[0]=='-' || str[0]=='+')
            i = 1;
        else
            i=0;
        for(; i<len; i++){
            if(valid_input(str[i])==false){
                string str2(str.begin(), str.begin() + i);
                str = str2;
                return str;
            }
        }
        return str;
    }
};