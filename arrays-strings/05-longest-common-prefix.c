## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Start with the first string as the candidate prefix. Compare it against each remaining string character by character, shrinking the candidate down whenever a mismatch is found. Stop early if the candidate becomes empty.

### Complexity
- Time: O(S) where S is the sum of all characters across all strings
- Space: O(1) extra (excluding the output)

### Notes
A static buffer is used here to return the result safely from the function in C.
