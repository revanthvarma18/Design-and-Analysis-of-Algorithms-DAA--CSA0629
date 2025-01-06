#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void permute(int arr[], int left, int right) {
    if (left == right) {
        for (int i = 0; i <= right; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = left; i <= right; i++) {
            swap(&arr[left], &arr[i]);
            permute(arr, left + 1, right);
            swap(&arr[left], &arr[i]); // backtrack
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    permute(arr, 0, n-1);
    return 0;
}

