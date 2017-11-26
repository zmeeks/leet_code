//~ I solved this in the spirit of multiset in C++'s STL. 
//~ However, since Java does not have a native multiset container,
//~ I made the equivalent version using Hashmaps and Treesets.

//~ For some reason on longer test sets, the conditional statement broke down when using
//~ get method inside the conditionals.  pulling the get method outside of the conditional
//~ by using local variables fixed this for whatever reason..

class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        TreeSet<Character> ts_s = new TreeSet<>();
        HashMap<Character, Integer> hm_s = new HashMap<>();
        TreeSet<Character> ts_p = new TreeSet<>();
        HashMap<Character, Integer> hm_p = new HashMap<>();
        int len_s = s.length();
        int len_p = p.length();
        int tmp, a, b;
        List<Integer> res = new ArrayList<>();
        if(len_p > len_s) return res;
        //~ adding letters to binary tree of p and also instances to the hash map of p
        for(int i=0; i<len_p; i++){
            ts_p.add(p.charAt(i));
            tmp = hm_p.getOrDefault(p.charAt(i),0);
            hm_p.put(p.charAt(i), tmp+1);
        } 
        
        //~ adding letters to mutable binary tree of s
        for(int i=0; i<len_p; i++){
            ts_s.add(s.charAt(i));
            //~ in case a letter appears twice need to account for it in a seperate hash map
            tmp = hm_s.getOrDefault(s.charAt(i),0);
            hm_s.put(s.charAt(i), tmp+1);
        }
        Iterator it_s = ts_s.iterator();
        Iterator it_p = ts_p.iterator();
        //~ if x_s == x_p after traversing ts_s AND ts_p doesn't have any more elements, then this is an anagram
        char x_s = 'a', x_p = 'z';
        while(it_s.hasNext()){
            x_s = (Character)it_s.next();
            x_p = (Character)it_p.next();
            a = hm_s.get(x_s); b = hm_p.get(x_p);
            if(x_s != x_p || (a != b)) break;
        }
        a = hm_s.get(x_s); b = hm_p.get(x_p);  //~ Java not working correcly when compared directly in conditional below (not sure why not tho)
        if(x_s == x_p && !it_p.hasNext() && (a == b)) res.add(0);
        //~ now to iterate through the rest of string s
        for(int i=len_p; i<len_s; i++){
            tmp = hm_s.get(s.charAt(i-len_p));
            if(tmp<=1)
                ts_s.remove(s.charAt(i-len_p));
            hm_s.put(s.charAt(i-len_p),tmp-1);
            tmp = hm_s.getOrDefault(s.charAt(i),0);
            hm_s.put(s.charAt(i), tmp+1);
            ts_s.add(s.charAt(i));
            it_s = ts_s.iterator();
            it_p = ts_p.iterator();
            x_s = 'a'; x_p = 'z';
            while(it_s.hasNext()){
                x_s = (Character)it_s.next();
                x_p = (Character)it_p.next();
                a = hm_s.get(x_s); b = hm_p.get(x_p);
                if(x_s != x_p || (a != b)) break;
            }
            a = hm_s.get(x_s); b = hm_p.get(x_p);
            if((x_s == x_p) && !it_p.hasNext() && (a == b))  res.add(i-len_p+1);
        }
        return res;
    }
}