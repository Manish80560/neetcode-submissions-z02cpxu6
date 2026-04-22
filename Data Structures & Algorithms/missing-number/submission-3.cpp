class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int re = 0;
        for(int i = 0 ; i < n ; i++){
            re += nums[i];
        }
        
        int pro = n*(n+1)/2;

        return pro - re;        
    }
};
