// Program 1: Subset Sum Problem using Backtracking
#include <stdio.h>

void findSubsets(int arr[], int n, int sum, int subset[], int subsetSize, int index) {
    if (sum == 0) {
        printf("Subset: ");
        for (int i = 0; i < subsetSize; i++)
            printf("%d ", subset[i]);
        printf("\n");
        return;
    }
    if (index >= n || sum < 0)
        return;

    subset[subsetSize] = arr[index];
    findSubsets(arr, n, sum - arr[index], subset, subsetSize + 1, index + 1);
    findSubsets(arr, n, sum, subset, subsetSize, index + 1);
}

int main() {
    int n, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], subset[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    findSubsets(arr, n, sum, subset, 0, 0);
    return 0;
}
