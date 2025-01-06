#include <stdio.h>
void reverseNumber() {
    char num[20];
    printf("Enter a number: ");
    scanf("%s", num);
    int i = 0;
    while (num[i]) {
        if (num[i] < '0' || num[i] > '9') {
            printf("Illegal input\n");
            return;
        }
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%c", num[j]);
    printf("\n");
}

int main() {
    reverseNumber();
    return 0;
}
