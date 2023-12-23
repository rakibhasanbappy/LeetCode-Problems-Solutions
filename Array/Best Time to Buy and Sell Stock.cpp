// Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// My Solution:

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int minBuyingPrice = INT_MAX;

        int profit = 0;

        for(int i=0;i<n;i++){

            if(prices[i] < minBuyingPrice) minBuyingPrice = prices[i];

            if((prices[i] - minBuyingPrice) > profit) profit = prices[i] - minBuyingPrice;

        }

        return profit;


    }
};
