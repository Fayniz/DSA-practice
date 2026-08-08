# 190. Reverse Bits

**Link:** https://leetcode.com/problems/reverse-bits/
**Category:** Bit Manipulation
**Difficulty:** Easy

## Problem

Reverse bits of a given 32 bits signed integer.

### Example 1
```
Input: n = 43261596
Output: 964176192

Integer      Binary
43261596     00000010100101000001111010011100
964176192    00111001011110000010100101000000
```

### Example 2
```
Input: n = 2147483644
Output: 1073741822

Integer      Binary
2147483644   01111111111111111111111111111100
1073741822   00111111111111111111111111111110
```

### Constraints
- `0 <= n <= 2^31 - 2`
- `n` is even.

**Follow up:** If this function is called many times, how would you optimize it?

## Approach

Build `result` one bit at a time over 32 iterations:
1. Shift `result` left by 1 to make room for the next bit.
2. Extract the last bit of `n` using `n & 1`.
3. OR that bit into `result`'s freshly opened last position.
4. Shift `n` right by 1 to expose the next bit for the following iteration.

After 32 iterations, `result` holds all of `n`'s bits in reverse order — each bit pulled from the low end of `n` ends up pushed progressively further toward the high end of `result`.

## Complexity

- **Time:** O(1) — fixed 32 iterations regardless of input value
- **Space:** O(1)

## Lessons Learned

- Reversing bits doesn't require "connecting" bits like a linked list — it's built using shift + OR to place each extracted bit into the correct position of a fresh result variable.
- Runtime numbers on LeetCode (ms) are noisy judge artifacts, not a real signal for an already-optimal O(1) fixed-iteration solution.
