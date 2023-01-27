# Problem description

Find the binary form of the given positive integer. Print it without leading trail of zeros.

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| 5         | 101        |
| 32        | 100000     |
| 1         | 1          |

## Explanations

### The problem

The problem doesn't specify it (just like in many other problems), but its assumed that the numbers are in the range of int.

### My solution

It is well-known problem and the solution is quite easy. First you find the residue of N dividing by 2 (N is the initial number) and it
will be the last bit of your binary form. Then you substitue N with its integer division by 2 result and find pre last bit. And os on.
I realize this algorithm using the structure called stack. The reason: first of all I don't need all the heavy machinery of the vector. 
Secondly, and more importantly, using the algorithm you find the binary form of the number but backwards. If you store this binary form
in some sort of a container, you will have to implement LIFO (Last In First out) because last added bit is the first bit, etc. This is
best done with stacks.

### Official solution

Official solution doesn't care and probably didn't aim  for efficiency, so they used vector instead of stack.
