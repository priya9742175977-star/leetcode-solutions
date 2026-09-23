#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
 * LeetCode 20: Valid Parentheses
 * Given a string containing '(', ')', '{', '}', '[', ']', determine if
 * the input is valid — every opening bracket must be closed by the
 * same type of bracket, in the correct order.
 * Approach: use a stack (simple array + top index). Push opening
 * brackets. On a closing bracket, pop the stack and check it matches;
 * if not, or the stack is empty, the string is invalid. At the end,
 * the stack must be empty for the string to be valid.
 */
bool isValid(char* s) {
    char stack[10001];
    int top = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) return false;
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

void run_test(char* s) {
    printf("isValid(\"%s\") = %s\n", s, isValid(s) ? "true" : "false");
}

int main(void) {
    printf("Test 1 (expect true): ");
    run_test("()[]{}");

    printf("Test 2 (expect false): ");
    run_test("(]");

    return 0;
}