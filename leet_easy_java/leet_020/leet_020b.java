class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<Character>();
        int len = s.length();
        for(int i=0; i<len; i++){
            char tmp = s.charAt(i);
            if(tmp == '(' || tmp == '[' || tmp == '{')
                stk.push(tmp);
            else if(stk.empty())
                return false;
            else{
                char left = stk.pop();
                if(left == '('){
                    if(tmp != ')')
                        return false;
                }else if(left == '['){
                    if(tmp != ']')
                        return false;
                }else if(left == '{'){
                    if(tmp != '}')
                        return false;
                }
            }
        }
        return stk.empty();
    }
}