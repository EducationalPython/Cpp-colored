# Problem description

Given 2 non-negative integers A and B not bigger than 1 000 000. Find integer division result of A / B.

If B = 0, return line "Impossible".

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| 10 2      | 5          |
| 3 5       | 0          |
| 11 0      | Impossible |

## Explanations


### The problem

For every 2 integer numbers A and B such that B ≠ 0 there exist unique pair of integers (q,r) such that r is in the range [0,B)  and
A = q*B + r. I don't know how proper terminology calls it and frankly I can't be bothered to google it, therefore I call integer division
an operation which for every pair (A,B) returns this number q. The problem is to find this q.

### My solution

In C++ division operator (/) performs integer division if both numbers are integers. Therefore the problem is to check if B = or ≠ 0, and
if it's not zero, just return A/B.

### Official solution

Official solution is the same.
