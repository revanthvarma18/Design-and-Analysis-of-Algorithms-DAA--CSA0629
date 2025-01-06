// Program 2: Armstrong Number Check
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

