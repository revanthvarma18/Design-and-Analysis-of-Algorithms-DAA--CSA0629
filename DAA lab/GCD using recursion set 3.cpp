// Program 2: GCD using recursion
#include <stdio.h>

int gcd(int a, int b) {
    if (a < 0 || b < 0)
        return -1;
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < 0 || b < 0)
        printf("Illegal input\n");
    else
        printf("GCD: %d\n", gcd(a, b));
    return 0;
}
