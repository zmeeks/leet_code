class Solution(object):
    def addBinary(self, a, b):
        carry = 0
        res = ""
        az = a[::-1]
        bz = b[::-1]
        i = 0
        sz = min(len(az), len(bz))
        while i<sz:
            tmp = int(az[i]) + int(bz[i]) + carry
            carry = 1 if tmp > 1 else 0
            res += str(tmp%2)
            i+=1
        if len(az) == len(bz) and carry >0: res += "1"      
        elif len(az) < len(bz): 
            sz = len(bz)
            while i<sz:
                tmp = int(bz[i]) + carry
                carry = 1 if tmp > 1 else 0
                res += str(tmp%2)
                i+=1
            if carry > 0: res += "1"
        elif len(bz) < len(az):
            sz = len(az)
            while i<sz:
                tmp = int(az[i]) + carry
                carry = 1 if tmp > 1 else 0
                res += str(tmp%2)
                i+=1
            if carry > 0: res += "1"
        return res[::-1]
        
        """
        :type a: str
        :type b: str
        :rtype: str
        """