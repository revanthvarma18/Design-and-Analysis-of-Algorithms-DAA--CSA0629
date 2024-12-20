#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseNumber(const char* num) {
    for (int i = 0; i < strlen(num); i++) {
        if (!isdigit(num[i])) {
            printf("Illegal input\n");
            return;
        }
    }

    int len = strlen(num);
    printf("Reversed number: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", num[i]);
    printf("\n");
}

int main() {
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);

    reverseNumber(num);

    return 0;
}

