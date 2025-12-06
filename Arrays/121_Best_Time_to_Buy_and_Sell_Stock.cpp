// Problem: Best Time to Buy and Sell Stock
// Difficulty: Easy
// Topic: Array
// LeetCode Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int maxProfit(int price[], int size) {
    int maxProfit = 0;
    int bestBuy = price[0];
    for(int i=1; i<size; i++) {
        if(price[i] > bestBuy) {
            maxProfit = max(maxProfit, price[i]-bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    return maxProfit;
}

int main() {

    int price[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(price) / sizeof(price[0]);
    cout << "Maximum Profit: " << maxProfit(price, size) << endl;

    return 0;
}