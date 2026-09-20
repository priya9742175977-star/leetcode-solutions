#include <stdio.h>
#include <string.h>

/*
 * LeetCode 344: Reverse a String
 * Reverse the given character array in-place.
 * Approach: two pointers, swap from both ends moving toward the middle.
 */
void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

void run_test(char* s) {
    int len = strlen(s);
    reverseString(s, len);
    printf("Result: %s\n", s);
}

int main(void) {
    // Test case 1: typical case
    char s1[] = "hello";
    printf("Test 1 (expect olleh): ");
    run_test(s1);

    // Test case 2: edge case - single character
    char s2[] = "a";
    printf("Test 2 (expect a): ");
    run_test(s2);

    return 0;
}