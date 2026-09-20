#include <stdio.h>

/*
 * LeetCode 704: Binary Search
 * Given a sorted array of unique integers and a target, return its index
 * if found, else -1.
 * Approach: classic binary search — repeatedly halve the search range
 * by comparing the middle element to the target.
 */
int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void run_test(int* nums, int size, int target) {
    printf("Index: %d\n", search(nums, size, target));
}

int main(void) {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1 (expect 4): ");
    run_test(nums1, 6, 9);

    int nums2[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 2 (expect -1): ");
    run_test(nums2, 6, 2);

    return 0;
}