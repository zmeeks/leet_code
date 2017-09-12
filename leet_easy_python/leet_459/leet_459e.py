class Solution(object):
    def repeatedSubstringPattern(self, str):
        return str in (str + str)[1:-1]     
        """
        :type s: str
        :rtype: bool
        """

        # proof of sol:
        """
        	gist of problem/proof:
			given len(str)>0, 
			any repeat-pattern will be <= len(str)/2 such that the repeat-pattern must exist at the beginning of str 
			as well as at the end of str. Moreover, the pattern must be cyclic such that the beginning pattern is the same
			as the end pattern, and that any substrings in the middle are also covered by the pattern. The exclusion of the
			first and last characters from [str + str] result in a string with length len((str + str)[1:-1]) >= len(str) such 
			that if and only if str is composed of cyclic substrings will str exist within (str + str)[1:-1].

			formal proof:
			-->
			suppose str cyclic and str not in (str + str)[1:-1], then there exists some middle sequence in str not found in the
			catenation between the end of str and the beginning of string. this contradicts the cyclic pattern of str --><--
			<--
			suppose str not cyclic, but str exists in (str + str)[1:-1], then there exists some index i (0<=i<len(str)) such that
			str[i:] + str[0:i] == str. This implies that, by definition, str is in fact cyclic --><--
			<-->
			Therefore the above algorithm always returns the correct answer for any nonempty string str. QED 
        """