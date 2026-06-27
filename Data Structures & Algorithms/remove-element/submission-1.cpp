class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>temp;
        for(int re : nums){
            if(re != val){
                temp.push_back(re);
            }
        }
        
        for(int i = 0 ; i < temp.size() ; i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};