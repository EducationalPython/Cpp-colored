# Problem description

Compute the price of the product if there is conditional discount: if initial price is bigger than A rubles, then it has a discount of 
X% and if initial price is bigger than B rubles, then it has a discount of Y%.

You will receive N, A, B, X, Y (where A < B) -- real numbers. N is initial price of the product.

## Examples

| **stdin**          | **stdout** |
|--------------------|------------|
| 100 110 120 5 10   | 100        |
| 115 110 120 5 10   | 109.25     |
| 150 110 120 5 12.5 | 131.25     |

## Explanations

### The problem

Pretty straightforward. There could be problems with real number precision just like it was discussed in the "Equation" problem. 
For more details regarding this problem: 
https://github.com/EducationalPython/Cpp-colored/tree/master/cpp-white/week-1/Problem%20Ax%5E2%2BBx%2BC%3D0

### My solution

Just a few conditional statements to check if any of discounts applies to the product. Nothing special.

### Official solution

Essentially the same.
