class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        int cooldownProfit = 0; // Profit available to spend after resting
        int prevMaxProfit = 0;  // Holds yesterday's maximum profit

        for (int price : prices) {
            // 1. Calculate today's potential sale using the best historical minPrice
            maxProfit = max(maxProfit, price - minPrice);
            
            // 2. Update minPrice using the cash available from the cooldown period
            minPrice = min(minPrice, price - cooldownProfit);
            
            // 3. Update cooldown restrictions for the next iteration
            cooldownProfit = prevMaxProfit;
            prevMaxProfit = maxProfit;
        }
        
        return maxProfit;
        
    }
};
