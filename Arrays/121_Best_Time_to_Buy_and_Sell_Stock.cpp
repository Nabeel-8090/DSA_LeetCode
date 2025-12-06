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