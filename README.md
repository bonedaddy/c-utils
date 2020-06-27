# c-utils

Various utility functions I'm writing to help me learn C. Ideally I want to replicate functionality I commonly use in Golang in C.

# files

## array_len.h

Defines a macro for returning the length of an array (number of elements) and the size of an array

## safe_math.h

Attempting to replicate a C version of the solidity SafeMath library. The idea is to have a safe way of doing arithmetic without having to manually check for wraparound or overflows

## random.h

Generate random numbers of strings

# compilation

Suggested to use the following compile flags for more safety

```
gcc -Wall -Wextra -pedantic -Werror
```