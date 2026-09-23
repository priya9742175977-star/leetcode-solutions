## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Use a stack. Push every opening bracket. On a closing bracket, pop the top of the stack and check it's the matching type — if not, or the stack is already empty, the string is invalid. At the end, the stack must be empty for the whole string to be valid.

### Complexity
- Time: O(n)
- Space: O(n) — worst case the stack holds every character

### Notes
Classic stack application: last-opened bracket must be the first one closed.
