class Solution {
    public int singleNumber(int[] nums) {
        int re = 0;
        for(int i = 0 ; i < nums.length ; i++){
            re ^= nums[i];
        }
        return re;  
    }
}
