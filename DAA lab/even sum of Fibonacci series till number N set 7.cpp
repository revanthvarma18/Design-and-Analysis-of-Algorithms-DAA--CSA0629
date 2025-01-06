#include <stdio.h>

int fibonacciEvenSum(int N) {
    int a = 0, b = 1, c, sum = 0;
    while (b <= N) {
        if (b % 2 == 0) {
            sum += b;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    int sum = fibonacciEvenSum(N);
    printf("Sum of even Fibonacci numbers up to %d is: %d\n", N, sum);
    return 0;
}

