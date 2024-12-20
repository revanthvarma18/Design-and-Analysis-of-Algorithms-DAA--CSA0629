#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    while (n > 0) {
        digits++;
        n /= 10;
    }

    n = original;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("Output: True\n");
    } else {
        printf("Output: False\n");
    }

    return 0;
}

