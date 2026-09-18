#include <stdio.h>
#include <stdlib.h>

/*
 * LeetCode 1: Two Sum
 * Given an array of integers nums and an integer target, return the
 * indices of the two numbers that add up to target.
 * Approach: brute force nested loop — check every pair.
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

void run_test(int* nums, int numsSize, int target) {
    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }
}

int main(void) {
    // Test case 1: typical case
    int nums1[] = {2, 7, 11, 15};
    printf("Test 1 (expect [0, 1]): ");
    run_test(nums1, 4, 9);

    // Test case 2: edge case - answer at the end
    int nums2[] = {3, 2, 4};
    printf("Test 2 (expect [1, 2]): ");
    run_test(nums2, 3, 6);

    return 0;
}