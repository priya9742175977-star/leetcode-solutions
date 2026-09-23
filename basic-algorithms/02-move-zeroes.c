#include <stdio.h>

/*
 * LeetCode 283: Move Zeroes
 * Move all zeroes in the array to the end while keeping the relative
 * order of the non-zero elements. Must be done in-place.
 * Approach: two pointers. "insert_pos" tracks where the next non-zero
 * element should go. Scan the array; whenever a non-zero is found,
 * place it at insert_pos and advance insert_pos. After the scan, fill
 * the rest of the array (from insert_pos to the end) with zeroes.
 */
void moveZeroes(int* nums, int numsSize) {
    int insert_pos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insert_pos] = nums[i];
            insert_pos++;
        }
    }
    for (int i = insert_pos; i < numsSize; i++) {
        nums[i] = 0;
    }
}

void run_test(int* nums, int size) {
    moveZeroes(nums, size);
    printf("Result: [");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main(void) {
    int nums1[] = {0, 1, 0, 3, 12};
    printf("Test 1 (expect [1, 3, 12, 0, 0]): ");
    run_test(nums1, 5);

    int nums2[] = {0};
    printf("Test 2 (expect [0]): ");
    run_test(nums2, 1);

    return 0;
}