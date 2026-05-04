class Solution {
    public int reverseBits(int n) {
        int re = 0;
        for(int i = 0 ; i < 32 ; i++){
            int bit = (n >> i) & 1;
            re += (bit << (31 - i));
        }
        return re;
    }
}
