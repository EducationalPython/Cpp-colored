# Problem description

Given two positive integers find their greatest common divisor.

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| 25 27     | 1          |
| 12 16     | 4          |
| 13 13     | 13         |

## Explanations

### The problem

This is a classical problem in elementary number theory. Its solution is well-known and named after Euclid, who came up with
algorithm to solve it. Main idea if a and b both divisible by d, then a+b, a-b are also divisible by d. So if (a,b) is GCD of a and b
then (a,b) is also GCD of (a-b,b) (let's say a is no less than b for clarity): indeed, first of all, both a and b divisible by (a,b)
there for a-b and b both divisible by (a,b). And so (a-b,b) ≥ (a,b). But the is true for (a-b,b): both a-b and b divisible by (a-b,b)
and therefore a = (a-b) + b and b both divisible by (a-b,b) and therfore (a,b) ≥ (a-b,b). So now we should just keep going from
(a,b) to (a-b,b) or (b-a, a) until one of them becomes 0: (0,x) = x. This x is the GCD of intial a and b.

To speed up this process we can use the operation % instead of -. In C++ a % b is residue from dividin a on b. So if a = q*b + r,
where r is integer in the range [0,b) then r = a % b. It is clear that all the same logic we come up with for a-b is true for a % b.

### My solution

My solution does exactly that using recursion: I set my GCD function as follows: if one of the arguments is zero return the other. 
If both are non-zero, then return GCD of a % b and b or b % a and a (depending on who is greater). At some point one of them will
become the gcd of a and b, and the other will be divisible by it and therefore the next iteration will be x and 0 and recursion will
return x, who is the gcd of a and b.

### Official solution

Official solution implements the same Euclid's algorithm not recursively but by using while loop (which might be a little better, because
there are memory problems with recursions). 

## Additional material

This problem is closely related to Diophantine equations ax + by = 1. For integer numbers a and b the goal is to find all integer
solutions x and y. The relation is following: if a and b has gcd(a,b) > 1, then it has zero solutions and if gcd(a,b) = 1, then it
has infinitely many solutions. Finding all the solutions if you have one solution is easy: all you have to do is for your solution
add infinite number of solutions of ax+by = 0. The problem is to find 1 solution of the equation. It appears that the wonderful
Euclid's algorithm does find 1 solution of the equation ax+by = gcd(a,b) in the process. For further details we refer you to Wiki
and other resources.

I added my solution to the problem ax+by = gcd(a,b) if you are interested. Comments in the file should help you to understand it.
