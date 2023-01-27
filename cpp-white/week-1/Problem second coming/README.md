# Problem description

Find when the letter 'f' (register sensitive) appears in the given string for the 2nd time and return its index. 
If it appears only once return -1 and if there are no 'f's in the string return -2 (return = print in stdout). Indexing starts with 0.

## Examples

| **stdin** | **stdout** |
|-----------|------------|
| comfort   | -1         |
| coffee    | 3          |
| care      | -2         |

## Explanations

### The problem

If a given string has the form 'xxxxfxxxxfxxxx' where 'xxxx' is place holder for arbitrary non 'f' symbols in arbitrary qunantity you 
need to find the index of the 2nd 'f' in the string.

### My solution

My solution is straightforward: I find the length of the string and iterate through the indexes of string. Beforehand I created a 
counter for 'f' and set it before the for loop as zero. During the for loop, if for some index the corresponding symbol is 'f' I 
increment the counter. Once the counter hits 2, I print out the symbol and break out of the loop. If that didn't happen I have a
conditional statement after the loop to check if there are any 'f's in the string at all to print -2 or -1.

### Official solution

Official solution is essentially the same, their realization might be a little more cohesive than mine. They create a variable result
and set it to -2. If during the loop nothing changes it, they will print out -2. The only way the result might change only if they meet
an 'f' (pun not intended) during the loop. When they meet an 'f' for the first time they set result to -1 and if nothing changes the
result once again, they will print out -1. And then if they meet an 'f' again and if result is already -1, then they will change result
to current index and break out of the loop.
