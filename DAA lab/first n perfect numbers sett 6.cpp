#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

void printPerfectNumbers(int n) {
    int count = 0, num = 1;
    while (count < n) {
        if (isPerfectNumber(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for N.\n");
        return 0;
    }

    printf("First %d perfect numbers are: ", n);
    printPerfectNumbers(n);
    return 0;
}

