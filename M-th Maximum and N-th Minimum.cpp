#include <stdio.h>
#include <stdlib.h>

void findSumAndDifference(int arr[], int size, int M, int N) {
    if (M <= 0 || N <= 0 || M > size || N > size) {
        printf("Illegal input\n");
        return;
    }
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int mthMax = arr[size - M];
    int nthMin = arr[N - 1];

    printf("Sum: %d, Difference: %d\n", mthMax + nthMin, mthMax - nthMin);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int M, N;
    printf("Enter M and N: ");
    scanf("%d %d", &M, &N);

    findSumAndDifference(arr, n, M, N);

    return 0;
}

