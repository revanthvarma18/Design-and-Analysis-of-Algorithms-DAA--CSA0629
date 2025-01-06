#include <stdio.h>

void printSubsets(int nums[], int n) {
    int totalSubsets = 1 << n;  // 2^n subsets
    for (int i = 0; i < totalSubsets; i++) {
        printf("[");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", nums[j]);
            }
        }
        printf("]\n");
    }
}

int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums)/sizeof(nums[0]);

    printSubsets(nums, n);
    return 0;
}

