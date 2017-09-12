class Solution(object):
    def addBinary(self, a, b):
        carry = 0
        res = ""
        az = a[::-1]
        bz = b[::-1]
        i = 0
        sz = max(len(az), len(bz))
        for i in range(len(az), sz): az +="0" 
        for i in range(len(bz), sz): bz +="0" 
        for aa,bb in zip(az, bz):
            tmp = int(aa) + int(bb) + carry
            carry = 1 if tmp > 1 else 0
            res += str(tmp%2)
        if carry >0: res += "1"      
        return res[::-1]
        
        """
        :type a: str
        :type b: str
        :rtype: str
        """