class Solution(object):
    def plusOne(self, digits):
        sz_d = len(digits)
        j = sz_d-1
        while j>=0 and digits[j]==9: j-=1
        if j<0:
            digits = [0]*(sz_d+1)
            digits[0] = 1
        else:
            digits[j]+=1
            for x in range(j+1, sz_d): digits[x]=0 
        return digits
        
        """
        :type digits: List[int]
        :rtype: List[int]
        """