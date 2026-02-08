
// Problem: Best Time to Buy and Sell Stock II
// Difficulty: Medium
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int maxProfit(int prices[], int size) {
    int maxProfit = 0;
    int bestBuy = prices[0];
    for(int i=1; i<size; i++) {
        if(prices[i] > bestBuy) {
            maxProfit += prices[i]-bestBuy;
            bestBuy = prices[i];
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);
    cout << "Maximum Profit: " << maxProfit(prices, size) << endl;

    return 0;
}