class MinStack(object):

    def __init__(self):
        self.stk = [[0,float('inf')]]
        """
        initialize your data structure here.
        """
        

    def push(self, x):
        last = self.stk[-1][1]
        if x <= last: self.stk.append([x,x])
        else: self.stk.append([x,last])   
        """
        :type x: int
        :rtype: void
        """
        

    def pop(self):
        return self.stk.pop()[0]
        """
        :rtype: void
        """
        

    def top(self):
        return self.stk[-1][0] 
        """
        :rtype: int
        """
        

    def getMin(self):
        return self.stk[-1][1]
        """
        :rtype: int
        """
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()