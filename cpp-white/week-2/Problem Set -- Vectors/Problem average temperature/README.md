# Problem description

Given a temperature recordings of N days. The days are indexed from 0, find the indexes which correspond to the days when the temperature 
was higher than the average temperature of all recorded days.

It is guaranteed that the average temperature is an integer number.

## stdin & stdout

First N is passed to the stdin and then N non-negative integers -- temperature values of the 0th, 1st, \.\.\., (N-1)-th day.

You should first print in stdout K -- the number of days, when the temperature was higher than average, 
then K integers -- indexes of these days.

## Example

**stdin**
```
5
7 6 3 0 9
```

**stdout**
```
3
0 1 4
```

## Explanations

### The problem

Nothing to explain here.

### My solution

Straigthforward. Initialize N, create a vector of the size N and then initialize it from stdin using a for loop. 
While initializing we can keep track of the sum of all the temperature, so that computing average temperature wouldn't require running 
a for loop again. Then I created a tracker of how many days are hotter than the average and the vector to store indexes of those days 
and found them. Then printed the result as it was needed.

### Official solution

Essentially the same as me, they just didn't track how many days are hotter and used `std::vector::size()` function. The difference is 
probably marginal.
