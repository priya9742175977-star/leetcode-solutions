## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Count the frequency of each letter in s, then subtract the frequency of each letter in t. If every count returns to zero (and lengths matched), t is an anagram of s.

### Complexity
- Time: O(n)
- Space: O(1) — fixed-size 26-element count array

### Notes
Works for lowercase English letters only. A hash map would generalize to any character set.
