// Program 1: Binary Search O(log n)
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    int res = binarySearch(arr, n, target);
    if (res != -1)
        printf("Element found at index %d\n", res);
    else
        printf("Element not found\n");
    return 0;
}

