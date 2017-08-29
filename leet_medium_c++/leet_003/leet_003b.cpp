class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> positions;
        int max_len = 0;
        int start_of_substr = -1;
        for(int i = 0; i<s.size();i++)
            positions[s[i]] = -1;
        for(int i = 0; i<s.size();i++){           
            if(positions[s[i]] > start_of_substr){
                if(i - start_of_substr - 1 > max_len)
                    max_len = i - start_of_substr - 1;
                start_of_substr = positions[s[i]];   
            }
            else if(i - start_of_substr > max_len){
                max_len = i - start_of_substr;
            }
            positions[s[i]] = i;
        }
        return max_len;
    }
};
/* this solution works.  However, it is more obfuscated than necessary */