class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        HashMap<Character, Integer> hm_s = new HashMap<>();
        HashMap<Character, Integer> hm_p = new HashMap<>();
        int len_s = s.length();
        int len_p = p.length();
        int tmp, a=0, b=-1;
        char x;
        List<Integer> res = new ArrayList<>();
        if(len_p > len_s) return res;
        //~ adding letters to hash map of p
        for(int i=0; i<len_p; i++){
            x = p.charAt(i);
            tmp = hm_p.getOrDefault(x,0);
            hm_p.put(x, tmp+1);
        } 
        
        //~ adding letters to mutable hash map of s
        for(int i=0; i<len_p; i++){
            x = s.charAt(i);
            tmp = hm_s.getOrDefault(x,0);
            hm_s.put(x, tmp+1);
        }
        //~ if hashmaps are same then this is an anagram
        for(int i=0; i<len_p; i++){
            x = s.charAt(i);
            a = hm_s.get(x); 
            b = hm_p.getOrDefault(x,0);
            if(a != b) break;
        }
        
        if(a == b) res.add(0);
        //~ now to iterate through the rest of string s
        for(int i=len_p; i<len_s; i++){
            x = s.charAt(i-len_p);
            tmp = hm_s.get(x);
            hm_s.put(x,tmp-1);
            x = s.charAt(i);
            tmp = hm_s.getOrDefault(x,0);
            hm_s.put(x, tmp+1);
            //~ if last item in the res list equals what the previous number's entry would be had the 
            //~ previous number been an anagram, then only need to check if cur letter == letter at index - len_p
            if(!res.isEmpty() && (res.get(res.size()-1) == i-len_p)){
                if(s.charAt(i) == s.charAt(i-len_p))
                    res.add(i-len_p+1);
            }
            else{ //~ else need to iterate through string against hashmap again
                for(int j=i-len_p+1; j<=i; j++){
                    x = s.charAt(j);
                    a = hm_s.get(x); 
                    b = hm_p.getOrDefault(x,0);
                    if(a != b) break;
                }
                if(a == b)  res.add(i-len_p+1);
            }          
        }
        return res;
    }
}