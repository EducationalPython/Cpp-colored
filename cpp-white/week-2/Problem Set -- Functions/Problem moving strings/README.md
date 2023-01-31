# Problem description

Write a function `MoveStrings` which should receive two vectors of strings `source` and `destination` as parameters and move all the
vectors from `source` to the end of `destination`. At the end `source` should become empty.

## Example
```C++
vector<string> source = {"a", "b", "c"};
vector<string> destination = {"z"};
MoveStrings(source, destination);
// source should be empty
// destination should consist of strings "z", "a", "b", "c" in this order.
```
## Explanations

### The problem

Nothing to explain here.

### My solution

Nothing to explain, just use references `vector<string>&` for both `source` and destination` cause both of them should change in the 
process. Then a standard range based for loop coupled with `std::vector::push_back()` and `std::vector::clear()` should do the trick.

### Official solution

The same as mine.
