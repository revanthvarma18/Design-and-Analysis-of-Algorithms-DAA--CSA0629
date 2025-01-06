#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Case 1: Palindrome check for a string
int isPalindromeString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            return 0;
        }
    }
    return 1;
}

// Case 2: Palindrome check for a number
int isPalindromeNumber(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return (original == reversed);
}

int main() {
    int caseNum;
    printf("Enter the case (1 for string, 2 for number): ");
    scanf("%d", &caseNum);
    
    if (caseNum == 1) {
        char str[100];
        printf("Enter the string: ");
        scanf("%s", str);
        if (isPalindromeString(str)) {
            printf("Palindrome\n");
        } else {
            printf("Not Palindrome\n");
        }
    } else if (caseNum == 2) {
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        if (isPalindromeNumber(num)) {
            printf("Palindrome\n");
        } else {
            printf("Not Palindrome\n");
        }
    } else {
        printf("Invalid case number\n");
    }

    return 0;
}

