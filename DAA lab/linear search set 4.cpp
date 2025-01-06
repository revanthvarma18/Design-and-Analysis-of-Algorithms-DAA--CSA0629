#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found
        }
    }
    return -1; // Element not found
}

int main() {
    int A[] = {56, 89, 7, 13, 75, 23, 8, 12};
    int B[] = {89, 45, -23, 45, 0, 44, 2};
    int C[] = {45, 67, 56, 34, -2, 100};
    
    int key_A = 75;
    int key_B = 0;
    int key_C = 90;
    
    printf("Element found at position: %d\n", linearSearch(A, sizeof(A) / sizeof(A[0]), key_A));
    printf("Element found at position: %d\n", linearSearch(B, sizeof(B) / sizeof(B[0]), key_B));
    printf("Element found at position: %d\n", linearSearch(C, sizeof(C) / sizeof(C[0]), key_C));
    
    return 0;
}

