class Solution(object):
    def reverse(self, x):
        sgn = 1 if x>=0 else -1
        x = x if sgn==1 else x*-1
        x_str = str(x)
        x_str = x_str[::-1]
        x = int(x_str)
        if x> 2**31:    
            return 0
        if x>= 2**31 and sgn == 1:
            return 0
        return (x if sgn==1 else x*-1)
        """
        :type x: int
        :rtype: int
        """
        