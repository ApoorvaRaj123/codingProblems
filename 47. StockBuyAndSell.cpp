// My first approach (wrong answer)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell = prices[0], buyDay = 0, sellDay = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
                buyDay = i + 1;
            }
            if (prices[i] > sell) {
                sell = prices[i];
                sellDay = i + 1;
            }
        }
        if (sellDay > buyDay) {
            return sell-buy;
        }
        return 0;
    }
};
