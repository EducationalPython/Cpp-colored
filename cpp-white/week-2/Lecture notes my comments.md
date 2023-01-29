# Lecture notes week 2

## Functions

The most basic info about writing functions in C++. Functions are simply distinct pieces of code which are only executed only if the
function is called. The only function which is executed automatically is main() function.

All functions have:

- the type of the return value
- the name of the function
- parameters of the function (the developer should specify what parameters the function will have and specify their names and types)
- the body of the function (consists of lines of code)

All of these things are specified beforehand in the following format:

```
type_of_return_value name_of_function (type_of_parameter_1 name_of_parameter_1, type_of_parameter_2 name_of_parameter_2, ...) {
	body_of_function
}
```

You can learn about functions in C++ and why they are needed everywhere on the internet. I will mention here some things that was very
useful to me to learn from this course and what I didn't learn in other courses when I tried to learn C++ on my own from free resources.

So, you know you can pass vector or string or any other container into a function as a parameter. It is done just how you would
expect:

```C++
int foo (vector<string> nums, ...) {
	...
}
```

However there are several problems with this. 

First and I would say the most important problem: so when you pass the vector or any other
variable into a function compiler creates a copy of this variable and let's function manipulate this copy. Why this is a problem?
Simply because compiler spends a lot of time and memory resources every time the function is called just to copy variables. Not even to
perform something the developer intended. 

Secondly, the consequence of working with the copies of the variables means the function can't change anything about the original
variables. So, if you want your function to change the variables you've passed you can only work with return values and invent some kind
of circus using tuples or something worse just to change the values of a few variables

And here the course taught me about references in C++. I still don't understand how exactly they work, but from what I understood a
reference is "less powerful but safer version" of pointers. I don't want to talk about pointers here because it would be cluttering
even more concepts. We will certainly talk about references and pointers in future, now I just want to say that you can pass a 
*reference* to a variable instead of passing the variable itself. This way you can: 1) avoid copying the contetns of the variable;
2) by knowing where the variable is stored you can change its content if needed. Here how it's done on previous example:

```C++
int foo (vector<string>& nums, ...) {
	...
}
```

And the most wonderful thing about references you can keep working with them as if they are your variables, not references. Literally,
nothing changes for e.g. if you want to access the first element of `nums` all you have to do is write `nums[0]`. If you compare it
with pointers it's day and night.

For conclusion, if you are learning something about C++ from this file (first of all, don't; take a good course instead or read books),
then use references every time you want to pass something more complicated than int to your function think about using a reference. If
you fear of accidentally changing the contents of the variable then you `const` specificator:

```C++
int foo (const vector<string>& nums, ...) {
	...
}
```

this way you still avoid unnecessary copying but you can't change the vector in any way.

And if you already know all of these and if by chance you are creating online courses on C++ or tutorials on C++ for beginners: don't
teach beginners about pointers: most of the time beginners can manage to do everything they wanted using references.

## Vectors

The course next teaches about vectors, the very basic introductions to vectors. They didn't yet explain how vectors are implemented in
C++ or what is the difference between vectors and arrays, and which operations are fast on vectors and which operations are slow. Just
the very basics like how to initialize them, how to create vectors with certain size and fill them with default values, etc.

Methods covered `std::vector::size()`, `std::vector::push_back()`, `std::vector::resize()`, `std::vector::assign()` and 
`std::vector::clear()`.

The thing I liked the most about vectors and other containers in C++ is __range based for__. If for e.g. you have a vector
`vector<string> v` and you want to iterate through it in natural order, you **don't** need following:

```C++
int n = v.size();
for (int i = 0; i < n; i++) {
	foo(v[i]);
}
```

This is __unnecessary__. All you have to do:

```C++
for (string s : v) {
	foo(s);
}
```

And you can further improve this by adding a reference to elements of the vector, so there's no unnecessary copying. Also if you do or
do not want to change your vector you can add `const` specificator`:

```C++
for (string& s : v) {
	foo(s);
}
```
or :

```C++
for (const string& s : v) {
	foo(s);
}
```

Furthermore, if you don't want to think about the exact type of elements of the vector you can just use `auto` instead of the type:

```C++
for (auto& s : v) {
	foo(s);
}
```
or:

```C++
for (const auto& s : v) {
	foo(s);
}
```
