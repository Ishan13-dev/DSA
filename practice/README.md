# DSA Practice in C & C++

A beginner-friendly practice collection for placement and coding-test preparation, based on a 40-question practice sheet.

Solutions are provided in **C (C11)** and **C++ (C++17)** with readable formatting, straightforward logic, and simple variable names.

## Code style
- One statement per line; no compressed one-liners.
- Separate input, logic, and output sections with blank lines.
- Consistent indentation and braces.
- Beginner-readable loops and conditions.

## How to navigate
- `solutions/c/` — C solutions
- `solutions/cpp/` — C++ solutions

## Compile and run
**C:** `gcc -std=c11 filename.c -o run` then `./run` (Windows: `run.exe`)  
**C++:** `g++ -std=c++17 filename.cpp -o run` then `./run`

## Question list (40)
### Numbers
1. Reverse a String
2. Check if a String is a Palindrome
3. Check if a Number is a Palindrome
4. Reverse an Integer
5. Check if a Number is Prime
6. Print Prime Numbers in a Range
7. Factorial of a Number
8. Fibonacci Series
9. Find the Nth Fibonacci Number
10. Check if a Number is Armstrong
11. Check if a Number is Perfect
12. Find GCD of Two Numbers
13. Find LCM of Two Numbers
14. Count Digits in a Number
15. Sum of Digits of a Number
### Strings
16. Reverse Words in a String
17. Count Vowels and Consonants
18. Count Frequency of Characters
19. Find Duplicate Characters in a String
20. Remove Duplicate Characters from a String
21. Check if Two Strings are Anagrams
22. Find First Non-Repeating Character
### Arrays
23. Find Largest Element in an Array
24. Find Smallest Element in an Array
25. Find Second Largest Element
26. Find Second Smallest Element
27. Sum of Array Elements
28. Reverse an Array
29. Check if an Array is Sorted
30. Remove Duplicates from an Array
31. Find Duplicate Elements in an Array
32. Find Missing Number in an Array (1 to N)
33. Find Frequency of Array Elements
34. Find Common Elements in Two Arrays
35. Merge Two Sorted Arrays
36. Find Intersection of Two Arrays
37. Find Union of Two Arrays
38. Move All Zeros to the End
39. Find Maximum and Minimum Difference
40. Find Pair with Given Sum

## Progress
- **All 40 questions:** Solutions available in both C and C++.
- **Questions 1–20:** Formatted to the requested readable style.
- **Questions 21–40:** Added in both languages and written in the same readable style.
- **Automated QA:** GitHub Actions compiles every C and C++ solution and runs smoke tests for integer boundary/overflow cases in GCD, LCM, digit count, digit sum, array sum, max-min difference, pair sum, reverse integer, factorial, and Fibonacci. The latest workflow run is linked below.
- [Compile workflow](../../actions/workflows/compile-solutions.yml)

**Remaining QA:** Add broader sample tests for all questions, review algorithm behavior and array-size assumptions, and then add concise explanations, sample inputs/outputs, and complexity notes.

- [C solution index](solutions/c/README.md)
- [C++ solution index](solutions/cpp/README.md)

Try each problem before opening the reference solution. Trace the code with small inputs and practice explaining the approach.