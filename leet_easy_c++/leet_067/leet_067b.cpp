class Solution {
public:
    string addBinary(string a, string b) {
        int len1 = a.size(), len2=b.size();
        int cnt=0, carry = 0, tmp = 0;
        string num_str = "";
        int a10, b10;
        while(cnt<len1 || cnt<len2){
            a10 = (a[len1-cnt-1] == '1' && cnt < len1 ? 1 : 0);
            b10 = (b[len2-cnt-1] == '1' && cnt < len2 ? 1 : 0);
            tmp = a10 + b10 + carry;
            if(tmp == 0){ 
                num_str = "0" + num_str; 
                carry = 0;
                cnt++;
            }else if(tmp == 1){
                num_str = "1" + num_str; 
                carry = 0;
                cnt++;
            }else if(tmp == 2){
                num_str = "0" + num_str; 
                carry = 1;
                cnt++;
            }else{  // tmp == 3
                num_str = "1" + num_str; 
                carry = 1;
                cnt++;
            }
        }
        if(carry == 1) num_str = "1" + num_str; 
        return num_str;
    }
};