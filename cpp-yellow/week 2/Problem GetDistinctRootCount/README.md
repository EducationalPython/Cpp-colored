# Problem description

Problem is to write unit test framework to test the function `int GetDistinctRealRootCount(double a, double b, double c)` who should
return the number of unique real roots of the equation ax<sup>2</sup> + bx + c = 0. We need to come up with examples to test correctness
of this function. 

The grading system will have both correct and wrong implementations of the function and if the program doesn't exit 
with an error on wrong implementation or if the program exits because of some error on correct implementation, then it will mark 
solution as wrong.

## Explanations

### The problem

The problem is part of the topic "Developing unit test framework" topic. I haven't added anything related to the week or even yellow belt
course as of yet, however I decided it would be easier to upload problem as I solve them, not when and if I will catch up.

We were already given basic framework and all we have to do is to comeup with specific tests for this problem.

### My solution

I decided to add 3 type of tests, tests that should test when there should be 2 roots, 1 root and 0 roots. I come up with different
tests to accomodate these scenarios and tried to use positive, negative and 0 as coefficients. Its easy to cheat through my testing 
system: all you have to do, is to write correct solution and then add 1 specific case of coefficients not covered by my tests and output
wrong answer for that.

### Official solution

In the official solution they use some kind of randomized coefficients for some tests, while for other tests for some reason they just
use specific test just like I do. They didn't teach how to generate random numbers as of yet, therefore I cannot comment on that. 
However I like the idea of randomizing tests.