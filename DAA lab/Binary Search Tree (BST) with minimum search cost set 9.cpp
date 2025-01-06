#include <stdio.h>
#include <limits.h>

int optimalSearchCost(int keys[], int freq[], int n) {
    int cost[n][n];
    
    for (int i = 0; i < n; i++) {
        cost[i][i] = freq[i]; // cost for a single node
    }

    for (int len = 2; len <= n; len++) { // len is the length of the subarray
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            cost[i][j] = INT_MAX;
            int totalFreq = 0;
            for (int k = i; k <= j; k++) {
                totalFreq += freq[k];
            }
            
            for (int k = i; k <= j; k++) {
                int leftCost = (k > i) ? cost[i][k-1] : 0;
                int rightCost = (k < j) ? cost[k+1][j] : 0;
                int currentCost = leftCost + rightCost + totalFreq;
                if (currentCost < cost[i][j]) {
                    cost[i][j] = currentCost;
                }
            }
        }
    }

    return cost[0][n-1];
}

int main() {
    int keys[] = {10, 12};
    int freq[] = {34, 50};
    int n = sizeof(keys)/sizeof(keys[0]);

    printf("Minimum search cost: %d\n", optimalSearchCost(keys, freq, n));
    return 0;
}

