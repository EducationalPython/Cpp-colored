# Problem description

Write a function which receives two integer parameters and if the first is bigger than the second, change the second to have a value of
the first parameter. The function should be called `UpdateIfGreater` and has two integer paramters: `first` and `second`; the function
should update the value of `second` with `first` if `first > second`. The function should return nothing.

## Example
```C++
int a = 4;
int b = 2;
UpdateIfGreater(a, b);
// b should be equal to 4
```
## Explanations

### The problem

The problem was specifically designed to use references I've talked about in "Lecture notes my comments.md".

### My solution

Nothing to explain if you know references. I used `const int&` for `first` parameter of the function, but this is excessive; `int` will
do the job as good.

### Official solution

The same, they just used `int` for `first` parameter just like you would expect.
