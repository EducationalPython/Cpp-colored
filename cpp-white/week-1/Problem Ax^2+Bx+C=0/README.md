# Problem description

Find all distinct solutions of Ax<sup>2</sup> + Bx + C = 0, where A, B, C are given real coefficients.

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| 2 5 2     | -0.5 -2    |
| 2 4 2     | -1         |
| 0 4 10    | -2.5       |

## Explanations

### The problem

Main difficulty of the problem is dealing with different cases when the equation is quadratic (A ≠ 0) or linear (A = 0) and if quadratic,
how many roots does it have (D = B<sup>2</sup> - 4AC >,=,< 0).

There is also another problem that could arise regarding computer precision of representation of real numbers. I used the double type 
and it was sufficent for this problem. If you have to deal with arbitrary precision, you either have to realize symbolic arithmetic or 
you have to specify the precision and create your real numbers class. This was white belt problem, therefore it wasn't needed. In the
future I plan to do both of these. I will add link here when that will be done.

### My solution

Nothing out of ordinary, I just check cases whether a = or ≠ to 0, and then whether D > or = to zero. If a = 0, then I check if b ≠ 0. 
All other cases have no solutions

### Official solution

The official solution is more or less the same, just maybe a different order of if statements.
