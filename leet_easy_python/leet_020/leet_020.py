class Solution(object):
    def isValid(self, s):
        stk = []
        sz = len(s)
        i = 0
        while i<sz:
            c = s[i];
            if c=='(' or c=='[' or c=='{':
                stk.append(c)
            elif len(stk) == 0: return False
            elif c==')' and stk[len(stk)-1]=='(': stk.pop()
            elif c==']' and stk[len(stk)-1]=='[': stk.pop()
            elif c=='}' and stk[len(stk)-1]=='{': stk.pop()
            else: return False
            i+=1
        if len(stk) != 0: return False
        return True
            
        """
        :type s: str
        :rtype: bool
        """
        