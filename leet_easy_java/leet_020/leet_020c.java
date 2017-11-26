class Solution {
    public boolean isValid(String s) {
        String str = "()[]{}";
        Stack<Character> stk = new Stack<Character>();
        int tmp, len = s.length();
        for(int i=0; i<len; i++){
            if((tmp = str.indexOf(s.substring(i,i+1)))%2 == 0)
                stk.push(str.charAt(tmp+1));
            else if(stk.empty() || stk.pop() != s.charAt(i))
                return false;
        }
        return stk.empty();
    }
}