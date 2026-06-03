class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;

        int re = (n*(n+1)) / 2;

        int r = 0;

        for(int i = 0 ; i < n ; i++){
            r += nums[i];
        }
        return re - r ;
    }
}
