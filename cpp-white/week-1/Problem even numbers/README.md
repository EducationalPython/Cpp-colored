# Problem description

Given 2 integers A and B (1 ≤ A ≤ B ≤ 30 000), find all even numbers between them (inclusively).

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| 1 10      | 2 4 6 8 10 |
| 2 3       | 2          |
| 9 11      | 10         |

## Explanations

### The problem

Nothing to explain here.

### My solution

Just set m = A % 2 == 0 ? A : A + 1 (if A is even then we start from A and if not from A + 1) and then print m, m+2, ... until we are
past B.

### Official solution

In official solution they check every number between A and B if they are even or not. They do a little bit more work I think, but
O(N) is O(N) and who tf cares about constants. Obviously, they didn't aim to have the most constant efficent solution but rather
a solution which would be understandable for newbies.
