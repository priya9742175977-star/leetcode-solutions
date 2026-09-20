#include <stdio.h>
#include <string.h>

/*
 * LeetCode 14: Longest Common Prefix
 * Find the longest string that is a prefix of all strings in the array.
 * Approach: use the first string as a candidate prefix. For each
 * subsequent string, trim the candidate down until it matches that
 * string's start. Stop early if the candidate becomes empty.
 */
char* longestCommonPrefix(char** strs, int strsSize) {
    static char prefix[201];
    if (strsSize == 0) {
        prefix[0] = '\0';
        return prefix;
    }
    strcpy(prefix, strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
        if (prefix[0] == '\0') break;
    }
    return prefix;
}

void run_test(char** strs, int size) {
    printf("Result: \"%s\"\n", longestCommonPrefix(strs, size));
}

int main(void) {
    char* strs1[] = {"flower", "flow", "flight"};
    printf("Test 1 (expect \"fl\"): ");
    run_test(strs1, 3);

    char* strs2[] = {"dog", "racecar", "car"};
    printf("Test 2 (expect \"\"): ");
    run_test(strs2, 3);

    return 0;
}