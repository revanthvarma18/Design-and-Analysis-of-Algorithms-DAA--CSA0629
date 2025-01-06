// Program 1: Find M-th maximum and N-th minimum number in an array, then compute sum and difference
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findMinMaxSumDiff(int arr[], int n, int M, int N) {
    if (M <= 0 || N <= 0 || M > n || N > n) {
        printf("Illegal input\n");
        return;
    }
    qsort(arr, n, sizeof(int), compare);
    int Mth_max = arr[n - M];
    int Nth_min = arr[N - 1];
    printf("M-th Maximum: %d, N-th Minimum: %d\n", Mth_max, Nth_min);
    printf("Sum: %d, Difference: %d\n", Mth_max + Nth_min, Mth_max - Nth_min);
}

int main() {
    int n, M, N;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter M and N: ");
    scanf("%d %d", &M, &N);
    findMinMaxSumDiff(arr, n, M, N);
    return 0;
}
