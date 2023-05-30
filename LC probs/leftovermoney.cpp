#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int leftoverMoney(std::vector<int>& prices, int money) {
    std::sort(prices.begin(), prices.end());  // Sort the prices array in ascending order
    int left = 0;
    int right = prices.size() - 1;
    int minSum = INT_MAX;  // Initialize minSum to the maximum value of int

    while (left < right) {
        int sumOfTwo = prices[left] + prices[right];
        if (sumOfTwo <= money) {
            minSum = std::min(minSum, sumOfTwo);
            left++;
        } else {
            right--;
        }
    }

    if (minSum == INT_MAX) {
        return money;
    } else {
        return money - minSum;
    }
}

int main() {
    std::vector<int> prices = {3, 1, 5, 4};
    int money = 7;
    int leftover = leftoverMoney(prices, money);
    std::cout << "Leftover money: " << leftover << std::endl;
    return 0;
}
