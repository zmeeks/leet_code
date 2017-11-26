class Solution {
    public void moveZeroes(int[] nums) {
        Integer[] tmps = Arrays.stream( nums ).boxed().toArray( Integer[]::new );
        Arrays.sort(tmps, (a,b) -> (a.equals(0) ? (b.equals(0) ? 0 : 1) : (b.equals(0) ? -1 : 0)));
        for(int i=0; i<tmps.length; i++) nums[i] = tmps[i].intValue();
    }
}