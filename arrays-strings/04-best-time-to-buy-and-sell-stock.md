## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Scan the prices left to right, tracking the lowest price seen so far. At each day, calculate the profit if sold today (current price minus the minimum seen so far) and keep the best one found.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Single pass avoids the O(n^2) brute force of checking every buy-sell pair.
