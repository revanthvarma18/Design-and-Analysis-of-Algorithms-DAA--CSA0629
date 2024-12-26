#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int A[] = {56, 89, 7, 13, 75, 23, 8, 12};
    int n = sizeof(A) / sizeof(A[0]);
    int key = 75;
    int result = linearSearch(A, n, key);

    if (result != -1)
        printf("Element found in position %d\n", result + 1);
    else
        printf("Element Not Found\n");

    return 0;
}

