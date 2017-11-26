class Solution {
    public int compress(char[] chars) {
        //~ sz = return value, pos = current pos in compressed char array
        int pos = 0, sz = 0;
        char ltr; //~ letter value being compressed
        for(int i=0, cur=1; i<chars.length; i++, cur=1){
            ltr = chars[i];
            //~ counting number of letters repeated
            while(i< chars.length - 1 && chars[i]==chars[i+1]){
                i++;
                cur++;
            }
            sz++; //~ to account for letter
            chars[pos++] = ltr;
            if(cur>1){
                int len =  (int)Math.floor(Math.log10(cur)) + 1;
                sz += len; //~ to account for numbers
                pos += len;
                int x = 0; //~ to position the numbers correctly
                while(cur > 0){
                    chars[pos + (--x)] = (char)(cur%10 + (int)'0');
                    cur/=10;
                }              
            } 
        }
        return sz;
    }
}