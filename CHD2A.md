# A. Quoc Minh and the Exercise

Today, Quoc Minh was given a very difficult problem by teacher Phuong. He came up with many solutions, each with different complexities. The judge is a machine built by teacher Phuong, which can process `m` operations in one second. Will Quoc Minh's solution get AC (Accepted)?

The possible time complexities of Quoc Minh's solution are:
- O(n)
- O(n log n)
- O(n^(3/2))
- O(n^2)
- O(n^2 log n)
- O(n^3)
- O(n^4)
- O(2^n)
- O(n!)

## Input

The problem has multiple test cases:

- The first line of each test case contains an integer `n` (0 ≤ n ≤ 10⁹), which is the input size.
- The second line contains an integer `m` (0 ≤ m ≤ 10⁹), which is the number of operations the machine can process.
- The third line is the time complexity of Quoc Minh's solution.

## Output

Output one line per test case:
- `AC` if the solution runs within the allowed number of operations.
- `TLE` if the solution exceeds the time limit.

## Sample

### Input
```
1000000  
100  
On^3  
1000000  
1000  
On^2logn
```

### Output
```
AC  
TLE
```
