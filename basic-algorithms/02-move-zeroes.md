## Problem: Move Zeroes (Easy-Medium)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Two pointers: scan the array and copy every non-zero element to the front, tracking the next insert position. Once done, fill the remaining positions with zeroes.

### Complexity
- Time: O(n)
- Space: O(1) — done in-place

### Notes
Preserves the relative order of non-zero elements, as required.
