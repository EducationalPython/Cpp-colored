# Problem description

Write a function which checks whether the word is a palindrome. The function should be named "IsPalindrom" and return boolean value
whether the string parameter passed to the function is palindrome or not.

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| madam     | true       |
| gentleman | false      |
| X         | true       |

## Explanations

### The problem

From Wikipedia, a _palindrome_ is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, 
such as the words madam or racecar, the date and time 12/21/33 12:21, and the sentence: "A man, a plan, a canal – Panama". 

### My solution

I decided to implement recursive solution: if the word has a length less than 2 (so empty string or one character string), then it is a 
palindrome. Else, if the first character and the last character are different, then for sure this word is not a palindrome. If they are 
the same, then run the function for subword of the word using `std::string::substr():: method.

For example, if the word is "madam", then we check if the length is less than 2. It's 5, therefore we go forward in my function. Thne we 
check if the 1st character ('m') is equal to the last character ('m'). It is, therefore we call IsPalindrom("ada") for substring. And so 
on.

### Official solution

Official solution didn't use recursion. They just run a for loop for the half of characters of the word and check if i-th character is
equal to i-th character from the end of the word. If the loop runs through without breaking, then it is a palindrome, else, if during 
the loop it breaks, then it is not. Their solution is more efficient in terms of memory, because my solution does hella a lot of copying
of substring because of recursions.
