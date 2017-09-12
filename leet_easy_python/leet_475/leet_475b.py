class Solution(object):
    def findRadius(self, houses, heaters):
        houses.sort()
        heaters = sorted(heaters) + [float('inf')]
        maxed, i, sz_1, sz_2 = 0, 0, len(houses), len(heaters) - 1
        for haus in houses:
                while heaters[i+1] == heaters[i]: i+=1
                while abs(haus - heaters[i]) > abs(haus - heaters[i+1]): i+=1
                maxed = max(maxed, abs(haus - heaters[i]))          
        return maxed               
            
        """
        :type houses: List[int]
        :type heaters: List[int]
        :rtype: int
        """