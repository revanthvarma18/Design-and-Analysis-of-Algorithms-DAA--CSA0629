// Program 4: Factorial using Recursion
#include <stdio.h>

long long factorial(int n) {
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Illegal input\n");
    else
        printf("Factorial: %lld\n", factorial(n));
    return 0;
}
