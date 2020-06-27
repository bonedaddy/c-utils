# scripts

helper `fish` functions for compiling C code with gcc

# gcc-compile

Compiles code with flags to enable better error detection:
```
gcc -std=c17 -Wall -Wextra -pedantic -Werror
```

# gcc-compile-fortify

Like `gcc-compile` but uses `-D_FORTIFY_SOURCE=2`

# gcc-compile-debug

Like `gcc-compile-fortify` but with extra debugging information