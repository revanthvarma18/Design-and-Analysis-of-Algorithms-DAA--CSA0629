#include <stdio.h>

#define MAX_ITEMS 4
#define MAX_WEIGHT 100

int knapsack(int weights[], int profits[], int n, int capacity) {
    int dp[n + 1][capacity + 1];
    
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = (profits[i - 1] + dp[i - 1][w - weights[i - 1]] > dp[i - 1][w])
                            ? (profits[i - 1] + dp[i - 1][w - weights[i - 1]]) 
                            : dp[i - 1][w];
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    int weights[MAX_ITEMS] = {40, 30, 20, 30};
    int profits[MAX_ITEMS] = {80, 70, 50, 80};
    int knapsackWeight = 100;
    int n = MAX_ITEMS;

    printf("Maximum profit: %d\n", knapsack(weights, profits, n, knapsackWeight));
    return 0;
}

