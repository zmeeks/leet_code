class Solution {
public:
    string addBinary(string a, string b) {
        int a10, b10, len1 = a.size(), len2=b.size(), cnt=0, carry = 0, tmp = 0;;
        string num_str = "";
        for(; cnt<len1 || cnt<len2; cnt++){
            a10 = (cnt < len1 && a[len1-cnt-1] == '1' ? 1 : 0);
            b10 = (cnt < len2 && b[len2-cnt-1] == '1' ? 1 : 0);
            tmp = a10 + b10 + carry;
            if(tmp == 0){ 
                num_str += "0"; 
                carry = 0;
            }else if(tmp == 1){
                num_str += "1"; 
                carry = 0;
            }else if(tmp == 2){
                num_str += "0"; 
                carry = 1;
            }else{  // tmp == 3
                num_str += "1"; 
                carry = 1;
            }
        }
        if(carry == 1) num_str += "1"; 
        reverse(num_str.begin(), num_str.end());
        return num_str;
    }
};