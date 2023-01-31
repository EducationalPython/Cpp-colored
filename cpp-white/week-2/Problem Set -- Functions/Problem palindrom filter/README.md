# Problem description

Write a function which receives `vector<string> words` and `int minLength` and returns all palindrome strings of the length no less than
minLength. The function should be called `PalindromFilter`, return `vector<string>`; `words` has `words.size() < 101`.

## Examples

| **words**       | **minLength** | **result**   |
|-----------------|---------------|--------------|
| abacaba, aba    | 5             | abacaba      |
| abacaba, aba    | 2             | abacaba, aba |
| weew, bro, code | 4             | weew         |

## Explanations

### The problem

From Wikipedia, a _palindrome_ is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, 
such as the words madam or racecar, the date and time 12/21/33 12:21, and the sentence: "A man, a plan, a canal – Panama". 

### My solution

I use the function `IsPalindrom()` from the previous problem "Palindrom"; for details of this function check that problem. Then it's
just creating a vector of all strings that satisfy the conditions. Initially it's empty, then we iterate using a range based for through
`words` and if any word satisfy the conditions, we add it to our vector. Simply straightforward.

### Official solution

The same, they just use their `IsPalindrom()` function from the previous problem.
