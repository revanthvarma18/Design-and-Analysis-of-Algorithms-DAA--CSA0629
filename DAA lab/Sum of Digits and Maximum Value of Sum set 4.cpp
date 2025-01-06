#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int maxSumOfPairsWithEqualDigitSum(int nums[], int size) {
    int max_sum = -1;
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sumOfDigits(nums[i]) == sumOfDigits(nums[j])) {
                int pair_sum = nums[i] + nums[j];
                if (pair_sum > max_sum) {
                    max_sum = pair_sum;
                }
            }
        }
    }
    
    return max_sum;
}

int main() {
    int nums[] = {51, 44, 23, 67};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Maximum sum of pairs with equal sum of digits: %d\n", maxSumOfPairsWithEqualDigitSum(nums, size));
    return 0;
}

