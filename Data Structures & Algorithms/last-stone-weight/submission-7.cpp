class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1) {

        // sort in ascending order
        sort(stones.begin(), stones.end());

        int n = stones.size();

        int y = stones[n - 1]; // largest
        int x = stones[n - 2]; // second largest

        // remove last two stones
        stones.pop_back();
        stones.pop_back();

        // if not equal, push difference
        if(y != x) {
            stones.push_back(y - x);
        }
    }

    // if no stone left
    if(stones.empty())
        return 0;

    return stones[0];
        
    }
};
