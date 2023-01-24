# Problem description

Given 3 strings divided by a spacebar. Strings consist of latin characters and their length is less than 30. Find their lexicographic
minimum.

## Examples

| **stdin**            | **stdout** |
|----------------------|------------|
| milk milkshake month | milk       |
| c a b                | a          |
| fire fog wood        | fire       |

## Explanations

### The problem

Lexicographic order is the order on the set of words consisting of the certain alphabet. The easiest way to think about it is to think
of dictionaries. If all the words you can create using certain alphabet had meanings the order in which they will appear in the
dictionary is the lexicographic order. For example, for standard latin alphabet you have the word "a", then "aa", and so on till 
"a...a"('a' is repeated 30 times), then the word "ab", "aba", and so on.

So using this order you can define which word is bigger or smaller than the other word. If the fisrt word would appear in the dictionary
earlier than the second word then the 1st word is smaller than the second. 

This problem wants you to determine the smallest word out of 3 given words according to this order.

### My solution

My solution is pretty easy. I create a varibale N = 3 for 3 strings I expect to receive from stdin. And then I run **for** loop of the
length N and compare each new string received with current minimum I stored. At the beginning minimum is set to empty string. It is easy
to scale my solution to any number of strings. The solution falls apart if empty string is considered to be the smallest string to exist
which is not the case in C++; it could be easily solved if initialize minimum with the first string you received from stdin.

### Official solution

Official solution uses built-in function to solve this problem.

While official solution uses standard function std::min and therefore more preffered, I think they made a mistake when uploaded it for
this problem. Because in the lecture just before this problem was given, they talked about if-else statements and basic <, > operands.
No way if someone is studying C++ from the scratch would know that such function exists and I think originally the problem is meant to
test how the student is understanding the material he was taught.