#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        // If no two elements were swapped by inner loop, then the array is sorted
        if (swapped == 0) break;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 5, 80, -2, 15, 23, 45};
    int arr2[] = {12, 3, 0, 34, -11, 2, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("Original array 1: ");
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    printf("Sorted array 1: ");
    printArray(arr1, n1);

    printf("Original array 2: ");
    printArray(arr2, n2);
    bubbleSort(arr2, n2);
    printf("Sorted array 2: ");
    printArray(arr2, n2);

    return 0;
}

