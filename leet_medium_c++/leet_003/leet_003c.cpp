class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> positions;
        int max_len = 0, start_of_substr = -1;
        for(int i = 0; i<s.size();i++) positions[s[i]] = -1; // initialize key-value pairs
        for(int i = 0; i<s.size();i++){           
            if(positions[s[i]] > start_of_substr){
                start_of_substr = positions[s[i]];   
            }
            positions[s[i]] = i;
            max_len = max(max_len, i - start_of_substr);
        }
        return max_len;
    }
};