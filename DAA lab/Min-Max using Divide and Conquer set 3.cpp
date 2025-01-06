// Program 3: Min-Max using Divide and Conquer
#include <stdio.h>
#include <limits.h>

typedef struct {
    int min;
    int max;
} MinMax;

MinMax findMinMax(int arr[], int low, int high) {
    MinMax result;
    if (low == high) {
        result.min = result.max = arr[low];
        return result;
    }
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }
    int mid = (low + high) / 2;
    MinMax left = findMinMax(arr, low, mid);
    MinMax right = findMinMax(arr, mid + 1, high);
    result.min = left.min < right.min ? left.min : right.min;
    result.max = left.max > right.max ? left.max : right.max;
    return result;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    MinMax result = findMinMax(arr, 0, n - 1);
    printf("Min: %d, Max: %d\n", result.min, result.max);
    return 0;
}

