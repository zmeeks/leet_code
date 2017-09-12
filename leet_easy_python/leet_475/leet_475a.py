class Solution(object):
    def findRadius(self, houses, heaters):
        houses.sort()
        heaters = sorted(set(heaters))
        maxed, j, sz_1, sz_2 = 0, 0, len(houses), len(heaters)
        for i in xrange(0, sz_2):
            while j< sz_1:
                if i + 1 < sz_2 and abs(houses[j] - heaters[i]) > abs(houses[j] - heaters[i+1]): break
                else: maxed = max(maxed, abs(houses[j] - heaters[i]))
                j+=1
        return maxed               
            
        """
        :type houses: List[int]
        :type heaters: List[int]
        :rtype: int
        """
        