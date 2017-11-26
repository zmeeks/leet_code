class Solution {
    public boolean isValid(String s) {
        HashMap<Character, Character> hmap = new HashMap<Character, Character>();
        hmap.put(')', '('); hmap.put(']', '['); hmap.put('}', '{');
        Stack<Character> stk = new Stack<Character>();
        int len = s.length();
        for(int i=0; i<len; i++){
            char tmp = s.charAt(i);
            if(hmap.get(tmp) == null)
                stk.push(tmp);
            else{
                if(stk.empty() || stk.pop() != hmap.get(tmp))
                    return false;
            }
        }
        return stk.empty();
    }
}