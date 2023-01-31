# Problem description

Write a function `vector<int> Reversed(const vector<int>& v)` which will return the reversed copy of a vector v.

## Example

| **vector v**  | **result**    |
|---------------|---------------|
| 1, 5, 3, 4, 2 | 2, 4, 3, 5, 1 |

## Explanations

### The problem

Nothing to explain here.

### My solution

Just iterate the vector using standard for loop and store the first element in the last position of a new resulting vector created
beforehand.

### Official solution

Essentially the same as me, they just iterated backwards and used push_back.
