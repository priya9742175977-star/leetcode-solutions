## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Check every pair of numbers in the array using two nested loops. For each pair, if the two numbers add up to the target, return their indices immediately.

### Complexity
- Time: O(n^2)
- Space: O(1) excluding the output array

### Notes
A hash map could bring this down to O(n) time by storing each number's complement as we scan, but the brute-force approach is clear and sufficient for small inputs. Worth revisiting with a hash map if time permits.
