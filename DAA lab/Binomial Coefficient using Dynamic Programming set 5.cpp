#include <stdio.h>

#define MAX 100

int binomialCoefficient(int n, int k) {
    int C[MAX][MAX];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (i < k ? i : k); j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
    
    return C[n][k];
}

int main() {
    int n = 8, k = 8;
    printf("Binomial Coefficient C(%d, %d) = %d\n", n, k, binomialCoefficient(n, k));
    return 0;
}

