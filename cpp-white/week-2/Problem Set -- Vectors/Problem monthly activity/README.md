# Problem description

You have to simulate a journal of things you have to do every month. For e.g. paying for water or for the Internet: if you have to pay
for your Internet on 3rd date of the month, then you have to pay for Internet 3rd date of every month. So you have to simulate
an interactive journal where you can add specific task on a specific day of the month, print all the tasks of the specific day, and 
change the month for the next.

Simulate the journal by processing the following requests:

- **ADD _i s_**: add the task `s` on the i-th day of the month;

- **DUMP _i_**: print all the tasks you should perform on the i-th day of the month;

- **NEXT**: change the month for the next month. All the tasks from the previous month should be copied to the new month and the new
month is now a current month. During this operation be wary of the number of days in each month:

-- if the new month has more days than the previous month, then all the "extra" days of the new month should be left empty (no tasks);

-- if the previous month has more days than the new month, then all the tasks from "extra" days of the previous month should be 
added to the last day of the new month.

## Remarks

- current month is January;

- the **NEXT** operation could be passed more than 11 times;

- the number of days in February is 28 always;

- no need to keep a history of tasks.

## stdin & stdout

First Q is passed -- the number of requests, and then requests will follow. Names of the tasks are unique, the numeration of days is
integer and start from 1 to the size of the current month.

For each **DUMP** request print out the number of tasks in each day and then tasks separated by a spacebar; for each day -- new line. 
The order of printing is not important within each request.

## Example

**stdin**
```
12
ADD 5 Salary
ADD 31 Walk
ADD 30 WalkPreparations
NEXT
DUMP 5
DUMP 28
NEXT
DUMP 31
DUMP 30
DUMP 28
ADD 28 Payment
DUMP 28
```

**stdout**
```
1 Salary
2 WalkPreparations Walk
0
0
2 WalkPreparations Walk
3 WalkPreparations Walk Payment
```

## Explanations

### The problem

Nothing to explain here.

### My solution

It is pretty straigtforward. I just create a constant array to store the numnber of days in each month `const vector<int> days_in_moth`
and `int month` to keep track of the current month. I also created `vector<string> monthly_jobs` to simulate a journal. It always has 
the size same as the number of days in current `month` -- `days_in_moth[month]`. Days initially have empty strings.

I process requests as you would expect:

- **ADD _i s_**: for each task `s` I add it to the end of the string `monthly_jobs[i]` and add a spacebar afterwards;

- **DUMP _i_**: for each dump operation I compute the number of tasks using `count` method (I count the number of spacebars because each
spacebar correspond to a task by my design). Alternatively, I could've created `vector<pair<int, string>> monthly_jobs` to store the
number of tasks;

- **NEXT**: I create a variable `int next_month` by incrementing a current `month` (and using modulo 12). Then I compare number of days
in current `month` and `next_month`, and if current `month` has more days, I run a for loop for extra days and collect tasks from those
days to a variable `extra_job`. Then I add `extra_job` to the end of the tasks of the last day of a `next_month`. After that I use a 
`resize` method and set `month` to `next_month`.

### Official solution

In the official solution they decide to simulate a journal by using `vector<vector<string>> days_concerns instead. So these vector
consists of a number of days in this month `vector<string>`s each representing tasks of each day. These helps them to faster print 
**DUMP _i_** request just by using `size()` method. They use `insert` method to add "extra" tasks when processing **NEXT** request.
