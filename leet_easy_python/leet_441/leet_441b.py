class Solution(object):
    def arrangeCoins(self, n):
        return int(math.floor(math.sqrt(.25 + 2*n) - 0.5))
        """
        :type n: int
        :rtype: int
        """

        # proof:
        """
        if the solution entails k rows of coins:
        1 + 2 + ... + k
        0.5*k^2 + 0.5k = n --> 
        [-0.5 +- sqrt(.25 + 2*n)] / 1
        is the solution found by completing the square using the quadratic formula
        """