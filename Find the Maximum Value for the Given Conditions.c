#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int nums[] = {18, 27, 33, 45};
    int n = sizeof(nums) / sizeof(nums[0]);
    int maxSum = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sumOfDigits(nums[i]) == sumOfDigits(nums[j])) {
                int sum = nums[i] + nums[j];
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
    }

    printf("Maximum Value: %d\n", maxSum);
    return 0;
}

