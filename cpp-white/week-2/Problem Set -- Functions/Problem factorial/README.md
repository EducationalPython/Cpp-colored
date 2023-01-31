# Problem description

Write a function which computes factorial of a non-negative integer. The function should be called `Factorial`, return int, receive int
and return its factorial. It's guaranteed that the argument of the function wouldn't be bigger than 10. For negative values the function
should return 1.

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| 1         | 1          |
| -2        | 1          |
| 4         | 24         |

## Explanations

### The problem

If you have a positive integer `n` then its factorial `n!` is the product of all integer numbers starting from 1 up to n: 
`n! = 1*...*(n-1)*n`. 

### My solution

Just a for loop from k = 1 to n and storing k! in int result which starts from 1. Nothing to explain here tbh.

### Official solution

Essentially the same, they just noticed that if you do a loop like me on k = 1 result doesn't change, so they've started from k = 2.
