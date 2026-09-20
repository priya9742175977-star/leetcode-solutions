#include <stdio.h>

/*
 * LeetCode 121: Best Time to Buy and Sell Stock
 * Given an array of prices, find the max profit from buying on one day
 * and selling on a later day.
 * Approach: track the minimum price seen so far while scanning left to
 * right; at each day, check if selling today (price - min_so_far) beats
 * the best profit found so far.
 */
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;
    int min_price = prices[0];
    int max_profit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }
    return max_profit;
}

void run_test(int* prices, int size) {
    printf("Max profit: %d\n", maxProfit(prices, size));
}

int main(void) {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1 (expect 5): ");
    run_test(prices1, 6);

    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2 (expect 0): ");
    run_test(prices2, 5);

    return 0;
}