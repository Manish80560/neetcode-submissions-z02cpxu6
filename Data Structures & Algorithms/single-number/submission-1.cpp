class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int re = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            re ^= nums[i];
        }
        return re;
    }
};
