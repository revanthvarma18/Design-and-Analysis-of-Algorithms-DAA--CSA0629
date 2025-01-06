#include <stdio.h>

void insertAtBeginning(int list[], int *size, int number) {
    for (int i = *size; i > 0; i--) {
        list[i] = list[i - 1];
    }
    list[0] = number;
    (*size)++;
}

void insertAtMiddle(int list[], int *size, int number) {
    int mid = *size / 2;
    for (int i = *size; i > mid; i--) {
        list[i] = list[i - 1];
    }
    list[mid] = number;
    (*size)++;
}

void insertAtLast(int list[], int *size, int number) {
    list[*size] = number;
    (*size)++;
}

void insertAtInvalidPosition() {
    printf("Invalid position to insert.\n");
}

int main() {
    int list[100], size = 0, number, position;
    
    printf("Enter the number to insert: ");
    scanf("%d", &number);
    printf("Enter the position to insert at (1 for beginning, 2 for middle, 3 for last): ");
    scanf("%d", &position);
    
    if (position == 1) {
        insertAtBeginning(list, &size, number);
    } else if (position == 2) {
        insertAtMiddle(list, &size, number);
    } else if (position == 3) {
        insertAtLast(list, &size, number);
    } else {
        insertAtInvalidPosition();
    }

    printf("Updated list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

