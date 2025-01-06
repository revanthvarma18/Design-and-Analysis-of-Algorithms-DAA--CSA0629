#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "as\nr5Y";
    reverseString(str);

    char str2[] = "7yut02";
    reverseString(str2);

    char str3[] = "EryEq";
    reverseString(str3);

    return 0;
}

