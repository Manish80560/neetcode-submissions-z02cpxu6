class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0 ; i < n ; i++){
            int re = 0;
            for(int j = i ; j < n ; j++){
                if(nums[j] == 0)  break;
                re++;
            }
            count = max(re , count);
        }
        return count;
    }
};