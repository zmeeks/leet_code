class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer> res = new ArrayList<>();
        if(s.length() < p.length()) return res;
        int[] dic_s = new int[26];
        int[] dic_p = new int[26];
        int flag; //~ if this "flag" iterator makes it to 26 it flags that an anagram exists
        for(char x : p.toCharArray()){
            dic_p[x - 'a']++;
        }
        int len_s = s.length(), len_p = p.length();
        for(int i=0; i<len_p; i++){
            dic_s[s.charAt(i) - 'a']++;
        }
        for(flag=0; flag<26; flag++){
            if(dic_s[flag] != dic_p[flag])
                break;
        }
        if(flag == 26)
            res.add(0);
        for(int i=len_p; i<len_s; i++){
            if(res.size()>0 && (res.get(res.size()-1) == i - len_p) && s.charAt(i) == s.charAt(i-len_p)){
                res.add(i-len_p+1);
            }
            else{
                dic_s[s.charAt(i-len_p)-'a']--;
                dic_s[s.charAt(i)-'a']++;
                for(flag=0; flag<26; flag++){
                    if(dic_s[flag] != dic_p[flag])
                        break;
                }
                if(flag == 26)
                    res.add(i-len_p+1);
            }
        }
        return res;
    }
}