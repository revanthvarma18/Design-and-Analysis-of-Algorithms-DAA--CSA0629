//Program 4: Binomial Coefficient using Dynamic Programming
#include <stdio.h>

int binomialCoeff(int n, int k) {
    int C[n + 1][k + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (i < k ? i : k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}

int main() {
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    if (k > n || n < 0 || k < 0) {
        printf("Illegal input\n");
        return 0;
    }
    printf("Binomial Coefficient: %d\n", binomialCoeff(n, k));
    return 0;
}
