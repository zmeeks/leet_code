class Solution {
public:
    string addBinary(string a, string b) {
        long long int a1, b2;
        int len1 = a.size(), len2=b.size();
        if(len1==0) a1 = 0;
        else if(a[len1-1]=='1') a1 = 1;
        else a1 = 0;
        if(len2==0){
            b2 = 0;
        } 
        else if(b[len2-1]=='1'){
            b2 = 1;
        } 
        else{
            b2 = 0;
        } 
        int k;
        for(int i=len1-2; i>=0; i--){
            k = len1 - 1 - i;
            if(a[i]=='1') a1+= (1<<(k)); 
        }
        for(int i=len2-2; i>=0; i--){
            k = len2 - 1 - i;
            if(b[i]=='1') b2+= (1<<(k)); 
        }
        a1 += b2;
        string num_str = "";
        if(a1 == 0) return "0";
        while(a1>0){
            num_str = to_string(a1&1) + num_str;
            a1 = a1>>1;
        } 
        return num_str;
    }
};

/*      NOTE: this solution does not handle numbers larger than long long int        */