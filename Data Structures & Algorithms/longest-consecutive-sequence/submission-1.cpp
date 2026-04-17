// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         int count = 0;
//         for(int i = 0 ; i < n - 1; i++){
//             if(nums[i] + 1 == nums[i] ||  nums[i] == nums[i+1])  continue;
//             if(nums[i + 1 ]  > nums[i]){
//                  count++;
//             }
//         }
//         return count ;
//     }
// };


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int count = 1;   // current sequence
        int ans = 1;     // max sequence

        for(int i = 0; i < n - 1; i++){
            
            if(nums[i] == nums[i+1]) 
                continue;  // skip duplicates
            
            if(nums[i] + 1 == nums[i+1]) {
                count++;   // consecutive
            } else {
                ans = max(ans, count);
                count = 1; // reset
            }
        }

        return max(ans, count);
    }
};