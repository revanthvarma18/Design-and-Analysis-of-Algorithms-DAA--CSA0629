#include <stdio.h>

void findSubsets(int set[], int n, int sum, int currentSum, int index, int subset[], int subsetSize) {
    if (currentSum == sum) {
        printf("Subset is: ");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("\n");
        return;
    }

    if (index == n || currentSum > sum) {
        return;
    }
    subset[subsetSize] = set[index];
    findSubsets(set, n, sum, currentSum + set[index], index + 1, subset, subsetSize + 1);

    findSubsets(set, n, sum, currentSum, index + 1, subset, subsetSize);
}

int main() {
    int n, sum;
    printf("Enter the size of the set: ");
    scanf("%d", &n);

    int set[n];
    printf("Enter the elements of the set: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int subset[n];
    printf("Subsets are:\n");
    findSubsets(set, n, sum, 0, 0, subset, 0);

    return 0;
}

