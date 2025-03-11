//Q3 best time to buy and sell stock
//Approach : first checking the min price for the stock then checking for the max profit 
//TC :O(N)
//SC :O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};
