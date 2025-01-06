#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int testCases[] = {4, -3, 6};
    for (int i = 0; i < 3; i++) {
        int result = testCases[i];
        if (result >= 0) {
            printf("Factorial of %d is %d\n", result, factorial(result));
        } else {
            printf("Factorial is not defined for negative numbers\n");
        }
    }
    return 0;
}

