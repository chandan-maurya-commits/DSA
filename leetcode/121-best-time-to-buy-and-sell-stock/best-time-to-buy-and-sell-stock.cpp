class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        int maxProfit=0;
        for(int i=0; i<prices.size(); i++){
            buy = min(buy, prices[i]);

            profit = prices[i] - buy;
            maxProfit = max(profit, maxProfit);

            
        }
        return maxProfit;
    }
};




































