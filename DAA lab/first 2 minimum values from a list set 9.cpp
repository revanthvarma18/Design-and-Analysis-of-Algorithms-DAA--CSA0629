#include <stdio.h>

void findTwoMin(int arr[], int n) {
    int firstMin = arr[0], secondMin = arr[1];
    if (arr[0] > arr[1]) {
        firstMin = arr[1];
        secondMin = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }
    }

    printf("First two minimum values: %d, %d\n", firstMin, secondMin);
}

int main() {
    int arr[] = {3, 5, -4, 1, 8, 2, 0, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    findTwoMin(arr, n);
    return 0;
}

