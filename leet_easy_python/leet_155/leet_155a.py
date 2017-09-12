class MinStack(object):

    def __init__(self):
        self.stk = []
        self.min_stk = [float('inf')]
        """
        initialize your data structure here.
        """
        

    def push(self, x):
        self.stk.append(x)
        if x <= self.min_stk[-1]: self.min_stk.append(x)
        """
        :type x: int
        :rtype: void
        """
        

    def pop(self):
        last = self.stk.pop()
        if last == self.min_stk[-1]: self.min_stk.pop()
        return last
        """
        :rtype: void
        """
        

    def top(self):
        return self.stk[-1]
        """
        :rtype: int
        """
        

    def getMin(self):
        return self.min_stk[-1]
        """
        :rtype: int
        """
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()