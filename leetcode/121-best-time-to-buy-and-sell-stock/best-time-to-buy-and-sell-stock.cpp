class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = INT_MAX;
        int maxProfit = 0;

        for(int i=0; i<prices.size(); i++){
            bestBuy = min(bestBuy,prices[i]);
            int profit = prices[i] - bestBuy;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};




































