class Solution {
    public int hammingDistance(int x, int y) {
        int flag = 1;
        int cnt = 0;
        for(int i=0; i<32; i++){
            if(((flag & x) ^ (flag & y)) > 0) cnt++;
            flag = flag<<1;
        }
        return cnt;
    }
}