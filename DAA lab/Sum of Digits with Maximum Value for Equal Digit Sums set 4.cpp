// SET 4

// Program 1: Sum of Digits with Maximum Value for Equal Digit Sums
#include <stdio.h>

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int maxSum = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digitSum(nums[i]) == digitSum(nums[j])) {
                int pairSum = nums[i] + nums[j];
                if (pairSum > maxSum) {
                    maxSum = pairSum;
                }
            }
        }
    }

    if (maxSum == -1) {
        printf("No such pairs found\n");
    } else {
        printf("Maximum Pair Sum: %d\n", maxSum);
    }

    return 0;
}
