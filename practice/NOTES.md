# Solution Notes: Approaches and Complexity

This guide briefly explains the main idea used by each reference solution and gives typical time/space complexity. Complexity is measured in terms of input size (n), number of digits (d), or array sizes (n) and (m). Fixed-size frequency tables (256 entries) count as constant space.

## Numbers

| # | Problem | Main idea | Time | Extra space |
|---|---|---|---|---|
| 1 | Reverse a string | Swap characters from the two ends moving inward. | O(n) | O(1) |
| 2 | String palindrome | Compare matching characters from both ends. | O(n) | O(1) |
| 3 | Number palindrome | Reverse the digits and compare with the original. | O(d) | O(1) |
| 4 | Reverse integer | Extract digits with remainder and build a reversed number. | O(d) | O(1) |
| 5 | Prime check | Try divisors only up to the square root. | O(√n) | O(1) |
| 6 | Primes in a range | Check each number in the range for divisors up to its square root. | O(R√E) upper bound | O(1) |
| 7 | Factorial | Multiply all integers from 1 through n. | O(n) | O(1) |
| 8 | Fibonacci series | Print the current pair and update it iteratively. | O(n) | O(1) |
| 9 | Nth Fibonacci | Advance the two-number Fibonacci state n times. | O(n) | O(1) |
| 10 | Armstrong number | Raise each digit to the number of digits and add; powers use a simple loop. | O(d²) | O(1) |
| 11 | Perfect number | Sum proper divisors and compare with the input. | O(n) | O(1) |
| 12 | GCD | Euclidean algorithm using remainders. | O(log n) | O(1) |
| 13 | LCM | Divide by the GCD before multiplying absolute values. | O(log n) | O(1) |
| 14 | Count digits | Repeatedly divide the absolute value by ten. | O(d) | O(1) |
| 15 | Sum digits | Extract and add each digit. | O(d) | O(1) |

## Strings

| # | Problem | Main idea | Time | Extra space |
|---|---|---|---|---|
| 16 | Reverse words | Split into words, then print them in reverse order. | O(n) | O(n) |
| 17 | Vowels and consonants | Scan letters and classify each alphabetic character. | O(n) | O(1) |
| 18 | Character frequency | Count each byte using a fixed frequency table. | O(n) | O(1) |
| 19 | Duplicate characters | Count characters, then print repeated characters once. | O(n) | O(1) |
| 20 | Remove duplicate characters | Keep the first occurrence of each character using a seen table. | O(n) | O(1) |
| 21 | Anagrams | Increment counts for one word and decrement for the other. | O(n) | O(1) |
| 22 | First non-repeating character | Count all characters, then scan in original order for count one. | O(n) | O(1) |

## Arrays

| # | Problem | Main idea | Time | Extra space |
|---|---|---|---|---|
| 23 | Largest element | Track the largest value during one scan. | O(n) | O(1) |
| 24 | Smallest element | Track the smallest value during one scan. | O(n) | O(1) |
| 25 | Second largest distinct | Track the largest and next distinct value. | O(n) | O(1) |
| 26 | Second smallest distinct | Track the smallest and next distinct value. | O(n) | O(1) |
| 27 | Sum array elements | Add values while reading them. | O(n) | O(1) |
| 28 | Reverse array | Swap elements from the two ends inward. | O(n) | O(1) |
| 29 | Check sorted | Ensure no value is smaller than its predecessor. | O(n) | O(1) |
| 30 | Remove duplicates | Build a result list, checking whether each value was added already. | O(n²) | O(n) |
| 31 | Duplicate elements | Count each value and print repeated values only once. | O(n²) | O(n) |
| 32 | Missing number (1..N) | Subtract the actual sum from the expected 1..N sum. | O(n) | O(1) |
| 33 | Element frequencies | Count each distinct value with nested scans. | O(n²) | O(n) |
| 34 | Common elements | Search the second array and keep each common value only once. | O(nm + n²) | O(n) |
| 35 | Merge sorted arrays | Merge with two pointers, choosing the smaller next value. | O(n+m) | O(n+m) |
| 36 | Intersection | Search for matches and output unique common values. | O(nm + n²) | O(n) |
| 37 | Union | Append values from both arrays only if not already present. | O((n+m)²) | O(n+m) |
| 38 | Move zeros to end | Compact nonzero values in order, then fill remaining slots with zero. | O(n) | O(1) |
| 39 | Maximum-minimum difference | Track minimum and maximum, then subtract. | O(n) | O(1) |
| 40 | Pair with given sum | Check each pair until one reaches the target. | O(n²) | O(1) |

## Input assumptions and limits

- Array exercises use fixed arrays sized for up to **100 elements**. Enter a valid positive size within this limit.
- The missing-number exercise assumes the input contains distinct values from 1 through N, with exactly one missing.
- The merge exercise expects both input arrays already sorted.
- The array-sorted exercise checks non-decreasing order (equal adjacent values are allowed).
- String exercises use fixed buffers and are intended for short practice inputs.
- Factorial accepts 0 through 20; larger values are rejected to avoid signed 64-bit overflow.
- Fibonacci series accepts at most 93 terms (F0 through F92); the nth-Fibonacci exercise accepts indexes 0 through 92.
- Numeric reversal, GCD, LCM, digit-count, and digit-sum handle 32-bit integer input edge cases using wider intermediate variables where needed.
- These solutions favor clear beginner-level loops over advanced optimizations. Time and space figures describe the current implementations.

## Automated sample tests

The test runner in scripts/smoke_test_all.py compiles and runs one representative sample for every question in both C and C++ (80 executions). GitHub Actions also runs additional boundary and overflow tests. See the compile-and-test workflow.
