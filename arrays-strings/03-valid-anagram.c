#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
 * LeetCode 242: Valid Anagram
 * Given two strings s and t, return true if t is an anagram of s.
 * Approach: count character frequencies in s, subtract frequencies from t.
 * If all counts return to zero and lengths match, it's an anagram.
 */
bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }
    int counts[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        counts[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }
    return true;
}

void run_test(char* s, char* t) {
    printf("isAnagram(\"%s\", \"%s\") = %s\n", s, t, isAnagram(s, t) ? "true" : "false");
}

int main(void) {
    printf("Test 1 (expect true): ");
    run_test("anagram", "nagaram");

    printf("Test 2 (expect false): ");
    run_test("rat", "car");

    return 0;
}