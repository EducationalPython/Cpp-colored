# Problem description

People are standing in the queue, but the queue never advances. However people can come and leave from the end of the queue. In addition, 
some people can become worried or calm down because the queue doesn't advance.

Simulate the queue by processing the following requests:

- **WORRY k**: mark the k-th (from the beginning, indexation starts from 0) person as worried;

- **QUIET k**: mark the k-th (from the beginning, indexation starts from 0) person as calmed down;

- **COME k**: add k calm people to the end of the queue;

- **COME -k**: remove k people from the end of the queue;

- **WORRY_COUNT**: find the number of worried people in the queue.

Initially the queue is empty.

## stdin & stdout

First Q is passed -- the number of requests that should be processed, then Q requests will follow.

For each **WORRY k** and **QUIET k** it is guaranteed that the person with index k exists in the queue when the request is passed.

For each **COME -k** it is guaranteed that k is not bigger than the size of the queue.

## Example

**stdin**
```
8
COME 5
WORRY 1
WORRY 4
COME -2
WORRY_COUNT
COME 3
WORRY 3
WORRY_COUNT
```

**stdout**
```
1
2
```

## Explanations

### The problem

Nothing to explain here.

### My solution

I created `vector<bool> queue` vector to track who is nervous in the queue (`true` means nervous). I also decided to create `count` 
variable to always track the number of nervous people. Then because it was said that there wouldn't be any wrong commands, 
I simply check first letter of the command to identify it and process each command accordingly:

- **COME k**: I find what is the value of k by using `substr` method to capture the end of the string and convert it to `int` using 
`stoi` function. If k is a negative number, then I need to subtract the number of nervous people among those k people who is leaving,
therefore I wrote `sum_last_k` function. Then I just use `resize` method to resize my vector;

- **QUIET k**: similarly to **COME k** I parse the string to find k and then if kth person is nervous I decrement `count` variable 
before setting it to false;

- **WORRY_COUNT** this is the simplest operation to perform because all I have to do is print `count` variable;

- **WORRY k**: analogous to **QUIET k** command.

### Official solution

In the official solution they created a `vector<bool>` instance too, the only difference is they chose to name it `is_nervous`. They 
don't keep track of how many nervous people in the queue there are, they just use standard method `count` whenever they need to print 
**WORRY_COUNT**. Everything else is just cosmetic difference and preferences.
