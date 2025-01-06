#include <stdio.h>

int isPalindrome(int x) {
    if (x < 0) return 0; // negative numbers are not palindrome
    int original = x, reversed = 0, remainder;
    
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int numbers[] = {121, 234, 4554};
    
    for (int i = 0; i < 3; i++) {
        if (isPalindrome(numbers[i])) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}

