class Solution {
public:
    bool isValid(string s) {
        stack<int> stack; //let '(' and ')' be 1, '[' amd ']' be 2, and '{' and '}' be 3
        int len = s.size();
        for(int i=0; i<len; i++){
            if(*(s.begin()+i) == '(')
                stack.push(1);
            else if(*(s.begin()+i) == '[')
                stack.push(2);
            else if(*(s.begin()+i) == '{')
                stack.push(3);
            else if(*(s.begin()+i) == ')')
                if(stack.empty() || stack.top() != 1) return false;                   
                else stack.pop();
            else if(*(s.begin()+i) == ']')
                if(stack.empty() || stack.top() != 2) return false;                   
                else stack.pop();
            else if(*(s.begin()+i) == '}')
                if(stack.empty() || stack.top() != 3) return false;                   
                else stack.pop();
        }
        return stack.empty();
    }
};