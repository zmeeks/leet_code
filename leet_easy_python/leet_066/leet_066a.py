class Solution(object):
    def plusOne(self, digits):
        j = len(digits)-1
        digits[j]+=1
        while j>0 and digits[j]==10:
            digits[j]=0
            digits[j-1]+=1
            j-=1
        if j==0 and digits[j] == 10:
            digits[0] = 0
            digits.insert(0,1)
        return digits
        
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        